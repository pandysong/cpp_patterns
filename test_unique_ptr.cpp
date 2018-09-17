#include <memory>
#include <iostream>

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
        ~Widget() { std::cout << _name << "Destruction" << std::endl; }

        friend void swap(Widget &a, Widget &b) { std::swap(a._name, b._name); }
};

int foo(std::unique_ptr<Widget> p)
{
    std::cout << "in foo()" << std::endl; 
    return 1;
}

int main()
{
    //auto p(std::make_unique<Widget>());
    //foo(p); //should emit error
    foo(std::make_unique<Widget>());  //good. it create a unique_ptr(consturct Wdiget) using make_unique
    auto p(std::make_unique<Widget>());
    foo(std::move(p)); // or we could move the ownership from top level to function
}
