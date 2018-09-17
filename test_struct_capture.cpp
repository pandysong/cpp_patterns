#include <iostream>

struct Distance {
    int value;
    int unit = 1;
};

struct Distance measure()
{
    return Distance{2,1};
}

int main()
{
    auto [value, unit] = measure();
    std::cout << value << std::endl<< unit << std::endl; // only available in C++17
}
