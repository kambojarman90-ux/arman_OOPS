//  Name-Armandeep singh(1024150241)
//Q1// 
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    Rectangle(int x) {
        length = breadth = x;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;        
    Rectangle r2(5);     
    Rectangle r3(4, 6);  

    r1.area();
    r2.area();
    r3.area();
}



//Q2//
#include <iostream>
using namespace std;

class Rectangle {
    int l, b;

public:
    Rectangle(int x = 0, int y = 0) { 
        l = x;
        b = y;
    }

    ~Rectangle() { 
        cout << "Object destroyed\n";
    }

    void area() {
        cout << l * b << endl;
    }
};

int main() {
    Rectangle r[3] = {Rectangle(), Rectangle(5), Rectangle(4,6)};

    for (int i = 0; i < 3; i++) {
        r[i].area();
    }
}



//Q3//
#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called\n";
    }

    ~Test() { 
        cout << "Destructor called\n";
    }
};

int main() {
    Test t1;
}




//Q4//
#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    void show() {
        cout << x << endl;
    }
};

int main() {

    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;


    float *f = new float;
    *f = 5.5;
    cout << *f << endl;
    delete f;
    int *arr = new int[3];
    arr[0]=1; arr[1]=2; arr[2]=3;
    for(int i=0;i<3;i++) cout<<arr[i]<<" ";
    delete[] arr;

    Demo *d = new Demo;
    d->x = 100;
    d->show();
    delete d;

    Demo *darr = new Demo[2];
    darr[0].x = 1;
    darr[1].x = 2;
    darr[0].show();
    darr[1].show();
    delete[] darr;
}