#include <iostream>
#include <initializer_list>

int print(std::initializer_list<int> data)
{
    for (auto i : data)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

int main()
{
    print({1,2,3,4,});
}

