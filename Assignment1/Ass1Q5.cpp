#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Hello\bWorld" << endl;
    cout << setw(10) << "C++";

    return 0;
}