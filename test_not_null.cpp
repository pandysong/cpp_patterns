#include <gsl/gsl>
int main()
{
    auto b = 1;
    gsl::not_null<int *> a (&b);
    return 0;
}
