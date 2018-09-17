#include <iostream>
#include <span>

void span_func(std::span<int> r)
{
   delete r; 
}
int main()
{
    int a[20];
    span_func(a);
}
