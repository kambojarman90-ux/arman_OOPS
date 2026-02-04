#include <iostream>
using namespace std;

class FriendClass;

class MyClass {
private:
    int secret = 50;
    friend class FriendClass;
};

class FriendClass {
public:
    void show(MyClass obj) {
        cout << "Secret value: " << obj.secret << endl;
    }
};

int main() {
    MyClass obj;
    FriendClass f;
    f.show(obj);
    return 0;
}

