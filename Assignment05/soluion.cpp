//Q1//
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     void showBase() {
//         cout << "This is Base class" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void showDerived() {
//         cout << "This is Derived class" << endl;
//     }
// };

// int main() {
//     Base b;
//     Derived d;

//     b.showBase();
//     d.showBase();     // inherited
//     d.showDerived();

//     return 0;
// }











//Q2//
// #include <iostream>
// using namespace std;

// class Base {
// protected:
//     int x;
// };

// class Derived : public Base {
// public:
//     void set() {
//         x = 10;
//         cout << "Value of x = " << x << endl;
//     }
// };

// int main() {
//     Derived d;
//     d.set();
//     return 0;
// }








//Q3//
//public//
// class A {
// public:
//     int x;
// };

// class B : public A {
// };

// //protected//
// class A {
// public:
//     int x;
// };

// class B : protected A {
// };

// //private//
// class A {
// public:
//     int x;
// };

// class B : private A {
// };



//Q4//
//single inheritance//
// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// };

// //multiple inheritance//
// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B {
// public:
//     void showB() {
//         cout << "Class B" << endl;
//     }
// };

// class C : public A, public B {
// };

// int main() {
//     C obj;
//     obj.showA();
//     obj.showB();
// }


// //hierarchical inheritance//
// class A {
// public:
//     void show() {
//         cout << "Base class A" << endl;
//     }
// };

// class B : public A {
// };

// class C : public A {
// };


// //multilevel inheritance//
// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// };

// class C : public B {
// };

// //hybrid inheritance//
// class A {
// public:
//     void showA() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
// };

// class C : public A {
// };

// class D : public B, public C {
// };







//Q5//
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     Base() {
//         cout << "Base constructor" << endl;
//     }
//     ~Base() {
//         cout << "Base destructor" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         cout << "Derived constructor" << endl;
//     }
//     ~Derived() {
//         cout << "Derived destructor" << endl;
//     }
// };

// int main() {
//     Derived d;
//     return 0;
// }




//Q6//
// #include <iostream>
// using namespace std;

// class Book {
// public:
//     string title, author;
//     float price;

//     void getBook() {
//         cout << "Enter title, author, price: ";
//         cin >> title >> author >> price;
//     }

//     void showBook() {
//         cout << title << " " << author << " " << price << endl;
//     }
// };

// class Textbook : public Book {
// public:
//     string subject;

//     void getTextbook() {
//         getBook();
//         cout << "Enter subject: ";
//         cin >> subject;
//     }

//     void showTextbook() {
//         showBook();
//         cout << "Subject: " << subject << endl;
//     }
// };

// int main() {
//     Textbook t;
//     t.getTextbook();
//     t.showTextbook();
//     return 0;
// }







//Q7//
// #include <iostream>
// using namespace std;

// class Speedometer {
// public:
//     int speed;
//     void setSpeed(int s) {
//         speed = s;
//     }
//     void showSpeed() {
//         cout << "Speed: " << speed << " km/hr" << endl;
//     }
// };

// class FuelGauge {
// public:
//     int fuel;
//     void setFuel(int f) {
//         fuel = f;
//     }
//     void showFuel() {
//         cout << "Fuel Level: " << fuel << "%" << endl;
//     }
// };

// class Thermometer {
// public:
//     int temp;
//     void setTemp(int t) {
//         temp = t;
//     }
//     void showTemp() {
//         cout << "Temperature: " << temp << " C" << endl;
//     }
// };

// int main() {
//     Speedometer s;
//     FuelGauge f;
//     Thermometer t;

//     s.setSpeed(60);
//     f.setFuel(70);
//     t.setTemp(90);

//     s.showSpeed();
//     f.showFuel();
//     t.showTemp();

//     return 0;
// }


//Q8//
// #include <iostream>
// using namespace std;

// // Base class
// class LibraryUser {
// protected:
//     string name;
//     int id;
//     string contact;

// public:
//     void getUserData() {
//         cout << "Enter Name: ";
//         cin >> name;
//         cout << "Enter ID: ";
//         cin >> id;
//         cout << "Enter Contact: ";
//         cin >> contact;
//     }

//     void showUserData() {
//         cout << "Name: " << name << endl;
//         cout << "ID: " << id << endl;
//         cout << "Contact: " << contact << endl;
//     }
// };

// // Derived class Student
// class Student : public LibraryUser {
// private:
//     int grade;

// public:
//     void getStudentData() {
//         getUserData();
//         cout << "Enter Grade: ";
//         cin >> grade;
//     }

//     void showStudentData() {
//         showUserData();
//         cout << "Grade: " << grade << endl;
//     }
// };

// // Derived class Teacher
// class Teacher : public LibraryUser {
// private:
//     string department;

// public:
//     void getTeacherData() {
//         getUserData();
//         cout << "Enter Department: ";
//         cin >> department;
//     }

//     void showTeacherData() {
//         showUserData();
//         cout << "Department: " << department << endl;
//     }
// };

// int main() {
//     Student s;
//     Teacher t;

//     cout << "\n--- Student Details ---\n";
//     s.getStudentData();
//     s.showStudentData();

//     cout << "\n--- Teacher Details ---\n";
//     t.getTeacherData();
//     t.showTeacherData();

//     return 0;
// }

//Q9//
// #include <iostream>
// using namespace std;

// // Base class
// class Vehicle {
// protected:
//     string make, model;
//     int year;

// public:
//     void getVehicle() {
//         cout << "Enter Make: ";
//         cin >> make;
//         cout << "Enter Model: ";
//         cin >> model;
//         cout << "Enter Year: ";
//         cin >> year;
//     }

//     void showVehicle() {
//         cout << "Make: " << make << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// // Derived class
// class Truck : public Vehicle {
// protected:
//     int load_capacity;

// public:
//     void getTruck() {
//         getVehicle();
//         cout << "Enter Load Capacity: ";
//         cin >> load_capacity;
//     }

//     void showTruck() {
//         showVehicle();
//         cout << "Load Capacity: " << load_capacity << " tons" << endl;
//     }
// };

// // Derived from Truck
// class RefrigeratedTruck : public Truck {
// private:
//     int temperature_control;

// public:
//     void getRefrigeratedTruck() {
//         getTruck();
//         cout << "Enter Temperature Control: ";
//         cin >> temperature_control;
//     }

//     void showRefrigeratedTruck() {
//         showTruck();
//         cout << "Temperature Control: " 
//              << temperature_control << " degree C" << endl;
//     }
// };

// int main() {
//     RefrigeratedTruck rt;

//     cout << "--- Refrigerated Truck Details ---" << endl;
//     rt.getRefrigeratedTruck();
//     rt.showRefrigeratedTruck();

//     return 0;
// }
