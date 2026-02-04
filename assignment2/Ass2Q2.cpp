#include <iostream>
using namespace std;

class Student
{
private:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }

    void showRoll()
    {
        cout << roll;
    }
};

int main()
{
    Student s;
    s.setRoll(10);
    s.showRoll();
    return 0;
}