#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// class C inherits from class B and class B inherits from class A

class A
{
public:
    A()
    {
        cout << "Hum A hieo" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B from A" << endl;
    }
};

class C : public B
{
public:
    C()
    {
        cout << "C from B" << endl;
    }
};

int main()
{
    C a;
    
    return 0;
}