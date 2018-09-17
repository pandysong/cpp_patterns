#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> s = {"hello","second","third"};
    std::string prefix = "prefix";
    std::for_each(std::begin(s), std::end(s), [&prefix](auto s) {
            std::cout << prefix << s<<std::endl;
            });
}
