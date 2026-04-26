//Q1//
#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};

int main() {
    Polygon *p;
    Rectangle r;
    Triangle t;

    p = &r;
    p->set_value(4,5);
    cout << "Rectangle area = " << r.calculate_area() << endl;

    p = &t;
    p->set_value(4,5);
    cout << "Triangle area = " << t.calculate_area() << endl;

    return 0;
}







//Q2//
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area not defined\n";
    }
    virtual void display() {
        cout << "Shape\n";
    }
};

class Circle : public Shape {
    int r;
public:
    Circle(int x) { r = x; }
    void area() {
        cout << "Circle Area = " << 3.14*r*r << endl;
    }
    void display() {
        cout << "Circle\n";
    }
};

class Rectangle : public Shape {
    int l,b;
public:
    Rectangle(int x,int y){ l=x; b=y; }
    void area() {
        cout << "Rectangle Area = " << l*b << endl;
    }
    void display() {
        cout << "Rectangle\n";
    }
};

class Triangle : public Shape {
    int b,h;
public:
    Triangle(int x,int y){ b=x; h=y; }
    void area() {
        cout << "Triangle Area = " << 0.5*b*h << endl;
    }
    void display() {
        cout << "Triangle\n";
    }
};

int main() {
    Shape *s;

    Circle c(3);
    Rectangle r(4,5);
    Triangle t(4,6);

    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();

    return 0;
}




//Q3//
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    void area(int b, int h) {
        cout << "Right Triangle Area = " << 0.5*b*h << endl;
    }

    void area(int a) {
        cout << "Equilateral Area = " << (sqrt(3)/4)*a*a << endl;
    }

    void area(int a, int b, int c) {
        float s = (a+b+c)/2.0;
        float ar = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "Isosceles Area = " << ar << endl;
    }
};

int main() {
    Triangle t;
    t.area(4,5);
    t.area(3);
    t.area(5,5,6);
}


//Q4//
#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0;
};

class Engineering : public Student {
public:
    void show() {
        cout << "Engineering Student\n";
    }
};

class Medicine : public Student {
public:
    void show() {
        cout << "Medical Student\n";
    }
};

class Science : public Student {
public:
    void show() {
        cout << "Science Student\n";
    }
};

int main() {
    Student* s[3];
    Engineering e;
    Medicine m;
    Science sc;

    s[0]=&e;
    s[1]=&m;
    s[2]=&sc;

    for(int i=0;i<3;i++)
        s[i]->show();
}



//Q5//
#include <iostream>
using namespace std;

class Time {
    int h,m,s;
public:
    Time(int x=0,int y=0,int z=0){
        h=x; m=y; s=z;
    }

    Time operator+(Time t) {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s = temp.s % 60;
        temp.h = h + t.h + temp.m/60;
        temp.m = temp.m % 60;
        return temp;
    }

    void show() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main(){
    Time t1(5,15,34), t2(9,53,58), t3;
    t3 = t1 + t2;
    t3.show();
}




//Q6//
#include <iostream>
#include <string.h>
using namespace std;

class STRING {
    char str[100];
public:
    void input() {
        cin >> str;
    }

    void display() {
        cout << str << endl;
    }

    bool operator==(STRING s) {
        return strcmp(str,s.str)==0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
};

int main(){
    STRING s1,s2,s3;
    s1.input();
    s2.input();

    if(s1==s2)
        cout<<"Equal\n";
    else
        cout<<"Not Equal\n";

    s3 = s1 + s2;
    s3.display();
}




//Q7//
#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    void input() {
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin >> a[i][j];
    }

    void display() {
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    friend Matrix operator*(Matrix m1, Matrix m2);
};

Matrix operator*(Matrix m1, Matrix m2){
    Matrix m;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            m.a[i][j]=0;
            for(int k=0;k<2;k++)
                m.a[i][j]+=m1.a[i][k]*m2.a[k][j];
        }
    }
    return m;
}

int main(){
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    m3 = m1*m2;
    m3.display();
}



//Q8//
#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    void input(){
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    int operator[](int i){
        if(i<0 || i>=5){
            cout<<"Out of bound\n";
            return -1;
        }
        return a[i];
    }
};

int main(){
    Array arr;
    arr.input();
    cout << arr[2];
}





//Q9//
#include <iostream>
using namespace std;

class Demo {
public:
    void operator()(int a,int b){
        cout<<"Sum = "<<a+b<<endl;
    }
};

int main(){
    Demo d;
    d(3,4);
}





//Q10//
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    friend istream& operator>>(istream &in, Test &t){
        in >> t.x;
        return in;
    }

    friend ostream& operator<<(ostream &out, Test &t){
        out << t.x;
        return out;
    }
};

int main(){
    Test t;
    cin >> t;
    cout << t;
}





//Q11//
#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a){
        x = a;
    }

    void show(){
        cout << x;
    }
};

int main(){
    float a = 5.5;
    Test t = a;
    t.show();
}





//Q12//
#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a){ x=a; }

    operator float(){
        return x;
    }
};

int main(){
    Test t(5.5);
    float a = t;
    cout << a;
}





//Q13//
#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, angle;
public:
    Polar(float a,float b){
        r=a; angle=b;
    }

    operator Cartesian();
};

class Cartesian {
    float x,y;
public:
    void show(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }

    Cartesian(float a=0,float b=0){
        x=a; y=b;
    }

    friend class Polar;
};

Polar::operator Cartesian(){
    float x = r * cos(angle);
    float y = r * sin(angle);
    return Cartesian(x,y);
}

int main(){
    Polar p(10,5);
    Cartesian c;
    c = p;
    c.show();
}
