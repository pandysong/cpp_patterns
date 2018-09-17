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

int main()
{
    int&& t = 3;
    std::cout << t++ << std::endl;
    std::cout << t++ << std::endl;
    Widget a;
    Widget b(a);
    Widget &&c = createWidget();
    return 0;
}
