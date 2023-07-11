#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Rectangle
{
public:
    int length;
    int breadth;

    // intializing a constructor
    // This is a default constructor I.E. no agruments are passed
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    // parameterized constructor
    Rectangle(int x, int y)
    {
        length = x;
        breadth = y;
    }
    // copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
    //making of destructor
    ~Rectangle(){
        cout<<"I am destruction!"<<endl;

    }
};

int main()
{
    Rectangle r1, r2, r4(5, 5);
    cout << r1.breadth << " " << r1.length << endl;
    
    Rectangle *last = new Rectangle(4,5);
    delete last;

    Rectangle r3(3, 5);
    cout << r3.breadth << r4.length << endl;

    Rectangle naya = r3;
}