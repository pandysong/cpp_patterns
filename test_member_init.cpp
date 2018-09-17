#include <string>
#include <iostream>
class A
{
    private:
        std::string a = "123";  // use this instead of
    public:
        A() : a{"123"} {}

    public:
        void set(std::string s)
        {
            a = s;
            std::cout << a << std::endl;
        }
};

int main()
{
    A a;
    a.set("1256");
}
