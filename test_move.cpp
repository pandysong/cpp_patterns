#include <iostream>

class Widget
{
    private:
        std::string _name;
    public:
        Widget() { std::cout << "Construction" << std::endl; }
        Widget(std::string name) :_name(name){ std::cout << name << " Construction" << std::endl; }
        Widget(const Widget &other) { 
            std::cout << "Copy Construction" << std::endl; }
        Widget(Widget &&other) { 
            std::cout << "Swap Construction" << std::endl; 
            _name = std::move(other._name);
        }
        ~Widget() { std::cout << _name << " Destruction" << std::endl; }
};

int main()
{
    Widget a("a");
    {
        Widget b = std::move(a);
    }
    return 0;
}
