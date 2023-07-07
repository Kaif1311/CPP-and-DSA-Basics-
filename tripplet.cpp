#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    int b[3];
    int alice = 0;
    int bob = 0;
    int i = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            alice++;
        }
        else if (a[i] < b[i])
        {
            bob++;
        }
        else if (a[i] == b[i])
        {
        }
    }
    cout << alice <<" ";
    cout << bob;
    return 0;
}