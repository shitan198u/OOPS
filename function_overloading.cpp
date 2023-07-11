#include <iostream>
#include <math.h>
using namespace std;

class Area
{
public:
    void area(int a)
    {
        // area of a square
        cout << a * a << endl;
    }
    void area(int length, int breadth)
    {
        cout << length * breadth << endl;
    }
    void area(float radius, char c)
    {
        double pi = 2 * acos(0.0);
        cout << pi * radius * radius << endl;
    }
};

int main()
{

    Area square, circle, rect;
    square.area(5);
    circle.area(float(5), 'c');
    rect.area(6, 7);

    return 0;
}