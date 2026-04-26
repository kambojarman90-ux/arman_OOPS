//Q1//
#include<iostream>
using namespace std;
class Book {
    public:
    string title,author;
    int ISBN;
};
class Library {
    Book b[10];
    int count=0;
    
public:
  bool addNewBook(string &t, string &a, int &id) {
    b[count].title = t;
    b[count].author = a;
    b[count].ISBN = id;
    count++;
    return true;
  }
  bool removeBooks(int &id) {
    for(int i=0; i < count; i++) {
        if (b[i].ISBN == id) {
            b[i]=b[count-1];
            count--;
            return true;
        }
    }
    return false;
  }
  void displayDetails() {
    for(int i=0; i<count; i++){
        cout << b[i].title << " "
             << b[i].author << " "
             << b[i].ISBN << endl;
    }
  }
};
int main() {
    Library l;
    string t = "C++", a="Bjarne";
    int id = 101;
    l.addNewBook(t, a, id);
    int id2= id+1;
    l.addNewBook(t, a, id2);
    l.displayDetails();
    l.removeBooks(id);
    l.displayDetails();
}



//Q2//
#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int ISBN;

    Book() {}

    Book(string t, string a, int id) {
        this->title = t;
        this->author = a;
        this->ISBN = id;
    }
};

class Library {
    Book b[10];
    int count = 0;

public:
    bool addNewBook(string t, string a, int id) {
        b[count] = Book(t, a, id);
        count++;
        return true;
    }

    bool removeBooks(int id) {
        for (int i = 0; i < count; i++) {
            if (b[i].ISBN == id) {
                b[i] = b[count - 1];
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << b[i].title << " "
                 << b[i].author << " "
                 << b[i].ISBN << endl;
        }
    }
};

int main() {
    Library l;

    l.addNewBook("C++", "Bjarne", 101);
    l.addNewBook("Java", "James", 102);

    l.displayDetails();

    l.removeBooks(101);

    l.displayDetails();
}


//Q3//
#include <iostream>
using namespace std;

class Account {
    const long accNo;
    long transID;
    string type;
    double balance;

public:
    Account(long a, double b) : accNo(a) {
        balance = b;
        transID = 0;
    }

    long depositAmount(const long to, const long from, const double amt) {
        balance += amt;
        type = "credit";
        return ++transID;
    }

    long creditAmount(const long to, const long from, const double amt) {
        balance -= amt;
        type = "debit";
        return ++transID;
    }

    void displayDetails() const {
        cout << accNo << " " << balance << " " << type << endl;
    }
};

int main() {
    Account a1(101, 1000);

    a1.depositAmount(101, 102, 500);
    a1.creditAmount(101, 102, 200);

    a1.displayDetails();
}


//Q4//
#include <iostream>
using namespace std;

class B; // forward declaration

class A {
    int x;
public:
    A(int a) { x = a; }
    friend int add(A, B);
};

class B {
    int y;
public:
    B(int b) { y = b; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a1(10);
    B b1(20);

    cout << "Sum = " << add(a1, b1);
}



//Q5//
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex sum(Complex, Complex);
};

Complex sum(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2, 3), c2(4, 5);

    Complex c3 = sum(c1, c2);

    c3.display();
}