#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    void show() {
        cout << "Roll number: " << roll << endl;
    }
};

int main() {
    Student s;      // normal object
    s.roll = 10;
    s.show();       // dot operator

    Student *p;     // pointer to object
    p = &s;
    p->roll = 20;   // arrow operator
    p->show();

    return 0;
}