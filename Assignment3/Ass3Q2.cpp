#include <iostream>
using namespace std;

class B;   // forward declaration

class A {
private:
    int x;
public:
    void set(int a) {
        x = a;
    }
    friend void swap(A &, B &);
};

class B {
private:
    int y;
public:
    void set(int b) {
        y = b;
    }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.set(5);
    b.set(10);

    swap(a, b);

    cout << "Swapped successfully" << endl;
    return 0;
}
