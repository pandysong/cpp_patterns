#include <iostream>

    template <class T>
auto square(T t)
{
    return t * t;
}

int main()
{
    auto a = square(12);// <int> could be reduced to <> which could be totaly omiited
    auto b = square(12.1);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
