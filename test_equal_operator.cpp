#include <string>
class B {
    private:
        std::string name;
    public:
        B(const std::string s):name{s} {}
        B(int a) {}
        B() = default;
        friend bool operator==(const B &a, const B&b)
        {
            return a.name == b.name;
        }


};
class C:public B {

};
int main()
{
    B b;
    B a;
    C cc;
    if (std::string("1")==cc) //compilation will fail
    {
        B c;
    }
}
