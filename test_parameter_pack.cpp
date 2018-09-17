#include <iostream>
class Widget
{
    public:
        Widget() { std::cout << "Widget Construction" << std::endl; }
        Widget(const Widget &other) { std::cout << "Widget Copy Construction" << std::endl; }
        Widget(const int &other) { 
            std::cout << "lvalue Construction" << std::endl; 
        }
        Widget(int &&other) { 
            std::cout << "Widget rvalue Construction" << std::endl; 
        }
        ~Widget() { std::cout << "Widget Destruction" << std::endl; }
};

class Shape: Widget
{
    public:
        template <typename... T>
            Shape(T &&... args) : Widget(std::forward<T>(args)...)
        {
            std::cout << "Shape Construction" << std::endl;
        }
};

Shape f()
{
    return Shape();
}

int main()
{
    Shape a;
    Shape b = a;
    Shape c(1);
}
