#include <iostream>
#include <string>
using namespace std;

struct student
{
    int rollNo;
    string name;
    string degree;
    string hostel;
    float cgpa;

    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter rollNo: ";
        cin >> rollNo;

        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails()
    {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nDegree: " << degree;
        cout << "\nHostel: " << hostel;
        cout << "\nCGPA: " << cgpa;
    }
};

int main()
{
    student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}
