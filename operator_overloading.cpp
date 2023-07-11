#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Complex
{
public:
    int real;
    int imaginary;

    Complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    Complex operator+(Complex &c)
    {
        Complex ans(0, 0);
        ans.real = real + c.real;
        ans.imaginary = imaginary + c.imaginary;
        return ans;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5);
    Complex ans = c1 + c2;
    cout<<ans.real<<"+"<<ans.imaginary<<"i "<<endl;
    return 0;
}