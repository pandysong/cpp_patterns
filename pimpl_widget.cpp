#include <iostream>
#include <string>
#include "pimpl_widget.h"

class private_class
{
   public:
    private_class() { std::cout << "private_class()" << std::endl; }
    ~private_class() { std::cout << "~private_class()" << std::endl; }
};

struct Widget::Impl
{
    std::string name;
    private_class b;
};

Widget::Widget() : pImpl(std::make_unique<Impl>()) {}

Widget::~Widget() {}
