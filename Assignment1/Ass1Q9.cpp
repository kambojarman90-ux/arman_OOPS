#include <iostream>
using namespace std;

int main()
{
    int a, b, ch;
    cin >> a >> b;
    cin >> ch;

    switch (ch)
    {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << a / b; break;
        default: cout << "Invalid choice";
    }

    return 0;
}

