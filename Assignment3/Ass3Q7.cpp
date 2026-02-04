#include <iostream>
using namespace std;

class Number {
public:
    int x;
};

Number modify(Number n) {
    n.x = n.x + 5;
    return n;
}

int main() {
    Number n1, n2;
    n1.x = 10;

    n2 = modify(n1);

    cout << "Original: " << n1.x << endl;
    cout << "Modified: " << n2.x << endl;
    return 0;
}
