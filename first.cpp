#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Fruit
{
public:
    string name;
    string colour;
};

class Student
{
    string name;
    int roll;
};

int main()
{
    Fruit apple, mango, banana; // creating objects

    apple.name = "Apple";
    apple.colour = "Red";

    Fruit *orange = new Fruit();
    orange->colour = "Orange";
    orange->name = "Orange";
    return 0;
}
