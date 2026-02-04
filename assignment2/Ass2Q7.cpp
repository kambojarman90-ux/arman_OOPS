#include<iostream>
using namespace std;
namespace Student
{
    int id=101;
    void show()
    {
        cout << "Student ID= " << id << endl;
    }
}
namespace Teacher
{
    int id=202;
    void show()
    {
        cout << "Teacher ID= " << id <<endl;
    }
}
int main()
{
    Student::show();
    Teacher::show();
    return 0;
}