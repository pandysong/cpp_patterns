#include <iostream>
#include <memory>
class DualWriter
{
    public:
        DualWriter(std::ostream &s1, std::ostream &s2) : s1(s1), s2(s2) {}
        template <class T>
            DualWriter &operator<<(const T &t)
            {
                s1 << t;
                s2 << t;
                //std::cout << decltype(&Dual::non_exists) <<std::end;
                return *this;
            }

    private:
        std::ostream &s1, &s2;
};

int main()
{
    DualWriter dl(std::cerr, std::cout);
    //dl << "hello world" << std::endl;
    dl << "hello world\n" ;
    return 0;
}
