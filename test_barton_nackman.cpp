#include <iostream>
#include <memory>
// A class template to express an equality comparison interface.
template <typename T>
class equal_comparable
{
    friend bool operator==(T const &a, T const &b) { return a.equal_to(b); }
    friend bool operator!=(T const &a, T const &b) { return !a.equal_to(b); }
};

// Class value_type wants to have == and !=, so it derives from
// equal_comparable with itself as argument (which is the CRTP).
class value_type : private equal_comparable<value_type>
{
    public:
        bool equal_to(value_type const &rhs) const;  // to be defined
};

bool value_type::equal_to(value_type const &rhs) const { return true; }

int main()
{
    value_type a;
    value_type b;
    std::unique_ptr<int> p{new int(1)};

    //std::cout << "object size " << sizeof(a) << std::endl;

    if (a != b)
        std::cout << "not equal" << std::endl;
    else
        std::cout << "equal" << std::endl;

    return 0;
}
