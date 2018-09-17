#include <iostream>

void foo(const int &x)
{
    std::cout << "lvalue " << x << std::endl;
}

void foo(int &&x)
{
    std::cout << "rvalue " << x << std::endl;
}


template<class T>
void wrapper(T&& arg)
{
    foo(std::forward<T>(arg));
}

int main()
{
    int a=12;
    wrapper(a);
    wrapper(13);
}
