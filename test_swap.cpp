#include <iostream>
#include <utility>

class Widget
{
    private:
        std::string _name;

    public:
        Widget() { std::cout << "Construction" << std::endl; }
        Widget(std::string name) : _name(name) { std::cout << name << " Construction" << std::endl; }
        Widget(const Widget &other) { std::cout << "Copy Construction" << std::endl; }
        Widget(Widget &&other)
        {
            std::cout << "Swap Construction" << std::endl;
            _name = std::move(other._name);
        }
        ~Widget() { std::cout << _name << " Destruction" << std::endl; }

        friend void swap(Widget &a, Widget &b) { std::swap(a._name, b._name); }
};

int main()
{
    Widget a("a");
    {
        Widget b("b");
        swap(a, b);
    }
    return 0;
}
