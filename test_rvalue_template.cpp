#include <iostream>

template <typename T>
class test
{
    public:
        test(T&& t)
        {
        }
};

    template <typename T>
void succeed(T&& t)
{
}

int main()
{
    int i = 1;
    test<int &> t(i);    // failed to compile
    succeed(i);        // OK
    return 0;
}
