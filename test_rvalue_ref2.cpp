#include <iostream>

class Widget
{
    public:
        Widget() { std::cout << "Construction" << std::endl; }
        Widget(const Widget &other) { std::cout << "Copy Construction" << std::endl; }
        ~Widget() { std::cout << "Destruction" << std::endl; }
};

Widget &&createWidget()
{
    return Widget();
}

void foo(int&& a)
{
    int b;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
}
void foo(const int& a)
{
    std::cout << a << std::endl;
}
int main()
{
    foo(3);
    int a=1;
    foo(a);
    return 0;
}
