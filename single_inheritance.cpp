#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Parent
{
public:
    Parent()
    {
        cout << "I am your baap" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Ha Babuji" << endl;
    }
};

int main()
{
    Child a;
    return 0;
}