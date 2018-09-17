#include <iostream>
#include <memory>

class Base {
    public:
        Base(int a) {} // error, if non default constructor is defined, default construtor will
        //not be used  need to using following link to bring back the default one
        Base() = default;
        ~Base() {
            std::cout << "~Base()" <<std::endl;
        }
        virtual void f() {
            std::cout << "~Base():f()" <<std::endl;
        }
};

class Derived : public Base {
    public:
        ~Derived() {
            std::cout << "~Derived()" <<std::endl;
        }
};

int main()
{
    std::unique_ptr<Base> p=std::make_unique<Derived>();
    Base b;
}
