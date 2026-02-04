#include <iostream>
using namespace std;
struct Rectangle
{
    int width, height;
    void getData()
    {
        cin >> width >> height;
    }
    void calculatearea()
    {
        cout << "area = " << width*height;
    }
};
int main()
{
    Rectangle r;
    r.getData();
    r.calculatearea();
    return 0;
}