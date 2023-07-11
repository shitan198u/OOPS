#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class New
{
    int x;

public:
    void set(int a)
    {
        x = a;
    }
    int get()
    {
        return x;
    }
};

int main()
{
    New a;
    a.set(3);
    cout << a.get() << endl;
    return 0;
}