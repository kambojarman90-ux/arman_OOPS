#include <iostream>
using namespace std;

class Rectangle {
public:
    int l, b;
    void input() {
        cin >> l >> b;
    }
    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter length and breadth: ";
        r[i].input();
    }

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;