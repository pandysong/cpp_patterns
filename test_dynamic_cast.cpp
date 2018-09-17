#include <iostream>

class B {
    public:
        virtual void f();
        virtual void h();
};

class D: public B { // public inheritance
    public:
        void f() override;
        void g();
};

void B::f()
{
    std::cout << "B::f()" << std::endl;
};

void B::h()
{
    std::cout << "B::h()" << std::endl;
};


void D::f()
{
    std::cout << "D::f()" << std::endl;
};

void D::g()
{
    std::cout << "D::g()" << std::endl;
};

void user(B *pb)
{
    if (D *d = dynamic_cast<D*>(pb))
    {
        d->g();
    }
    else
    {
        pb->f();
    }
}

int main()
{
    D b;
    user(&b);
}
