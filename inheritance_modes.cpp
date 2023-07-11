#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Parent
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class ChildA : public Parent
{
    // x will be inaccessible
    // y will be protected
    // z will be public
};

class ChildB : protected Parent
{
    // x will be inaccessible;
    // y will be protected
    // z will be protected
};

class ChildC : private Parent
{
    // x will be inaccessible
    // y will be private
    // z will be private
};

int main()
{

    return 0;
}