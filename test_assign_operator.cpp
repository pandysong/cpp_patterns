#include <iostream>

class Foo
{
    private:
        std::string _name;

    public:
        Foo(std::string name) : _name(name)
    {
        std::cout << "Construction " << _name << this << std::endl;
    }
        Foo(Foo &others) { std::cout << "Copy Construction " << _name << this << std::endl; }
        Foo(Foo &&others) { std::cout << "rvalue Construction " << _name << this << std::endl; }
        ~Foo() { std::cout << "Deconstruction " << _name << this << std::endl; }
        Foo &operator=(const Foo &rhs)
        {
            std::cout << "operator=" << this << std::endl;
            return *this;
        }
};

int find(int) // unnamed parameter indicate the parameter is not used
{
    return 1;
}

int main()
{
    Foo a("a");
    Foo b = a;  // copy construction
    Foo e(std::move(a));  // r value construction
    Foo c("b");
    c = a;  // assign operator
    return 0;
}
