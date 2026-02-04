#include <iostream>
using namespace std;
struct Demo
{
    void show()
    {
        cout << "inside show function";
    }
    void call()
    {
        show();
    }
};
int main()
{
    Demo d;
    d.call();
    return 0;
}
