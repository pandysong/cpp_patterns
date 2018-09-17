#include <iostream>

template <class... Args>
auto sum(Args... args)
{                         // GOOD, and much more flexible
    return (... + args);  // note: C++17 "fold expression", left fold
    //return (args + ...);    // note: C++17 "fold expression", right fold
}

#if 0
    template <class... Args>
auto left_shift(Args... args)
{                         // GOOD, and much more flexible
    return (... << args);  // note: C++17 "fold expression", left fold
    //return (args + ...);    // note: C++17 "fold expression", right fold
}
#endif

int main()
{
    std::cout << sum(3, 2) << std::endl;              // ok: 5
    std::cout << sum(3.14159, 2.71828) << std::endl;  // ok: ~5.85987
    //left_shift(std::cout, 1,2,3);
}
