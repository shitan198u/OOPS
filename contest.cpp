#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string StringChallenge(string str)
{

    int length = str.length();
    int i = 0;
    while (bool(ispunct(str[i])))
    {
        str[i] = tolower(str[i]);
        i++;
    }
    for (int j = 0; i < length - 1; j++)
    {
        if (ispunct(str[j]))
        {
            str[j + 1] = toupper(str[j + 1]);
        }
        else
        {
            str[j] = tolower(str[j]);
        }
    }
    return str + ":cx59t73f";
}

int main(void)
{

    // keep this function call here
    cout << StringChallenge("hello MAN how are you");
    return 0;
}