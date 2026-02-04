#include <iostream>
using namespace std;
struct test
{
    void show();
};
void test::show()
{
    cout << "function outside struct";
}
int main()
{
    test t;
    t.show();
    return 0;
}