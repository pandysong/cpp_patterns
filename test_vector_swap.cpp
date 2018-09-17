// swap vectors
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> foo (3,100);   // three ints with a value of 100
    std::vector<int> bar (5,200);   // five ints with a value of 200

    foo.swap(bar);
    //std::swap(foo,bar);// we could also use swap

    std::cout << "foo contains:";
    for (auto i:foo)
        std::cout << i << ' ' ;
    std::cout << std::endl;

    std::cout << "foo contains:";
    for (auto i:bar)
        std::cout << i << ' ' ;
    std::cout << std::endl;

    return 0;
}
