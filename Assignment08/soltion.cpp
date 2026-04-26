#include <iostream>
using namespace std;
// 1
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "x = " << x << ", y = " << y << endl;

    double p = 1.5, q = 2.5;
    swapValues(p, q);
    cout << "p = " << p << ", q = " << q << endl;
}
// 2
template <typename T>
T findMin(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    cout << "Min: " << findMin(arr, 5) << endl;
}
// 3
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main() {
    int arr[] = {5, 3, 8, 1, 4};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}

// 4
template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int idx = linearSearch(arr, 4, 30);
    cout << "Found at index: " << idx << endl;
}

// i) Single parameter
template <typename T>
void process(T a) {
    cout << "Single param: " << a << endl;
}

// ii) Two parameters of the same type
template <typename T>
void process(T a, T b) {
    cout << "Two same-type params: " << a << ", " << b << endl;
}

// iii) Two parameters of different types
template <typename T1, typename T2>
void process(T1 a, T2 b) {
    cout << "Two different-type params: " << a << ", " << b << endl;
}

int main() {
    process(5);
    process(3, 7);
    process(3, 4.5);
}
// 5
template <typename T>
class Stack {
    T arr[100];
    int top = -1;
public:
    void push(T val) { arr[++top] = val; }
    void pop() {
        if (top >= 0) top--;
        else cout << "Stack underflow\n";
    }
    T peek() { return arr[top]; }
    bool isEmpty() { return top == -1; }
};

int main() {
    Stack<int> s;
    s.push(10); s.push(20);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
}
// 6
template <typename T>
class Queue {
    T arr[100];
    int front = 0, rear = -1;
public:
    void enqueue(T val) { arr[++rear] = val; }
    void dequeue() {
        if (front <= rear) front++;
        else cout << "Queue empty\n";
    }
    T getFront() { return arr[front]; }
};

int main() {
    Queue<int> q;
    q.enqueue(1); q.enqueue(2);
    cout << q.getFront() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
}
// 8
template <typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b) : first(a), second(b) {}
    void display() {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

int main() {
    Pair<int, string> p(1, "hello");
    p.display();
}
// 9
template <typename T>
class Arithmetic {
    T a, b;
public:
    Arithmetic(T x, T y) : a(x), b(y) {}
    T add()      { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide()   { return a / b; }
};

int main() {
    Arithmetic<double> obj(10.0, 2.0);
    cout << obj.add() << endl;
    cout << obj.divide() << endl;
}

// 10
template <typename T>
class Array {
    T arr[100];
    int size;
public:
    void input(int n) {
        size = n;
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Array<int> a;
    a.input(5);
    a.display();
}