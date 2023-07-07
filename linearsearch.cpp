#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int linear(int arr[], int n,int key)
    {
        for (int i = 0; i < n; i++) 
        {
            if (key == arr[i])
            {
                return i;
            }
            else
            {
                // cout << "Number is not present in this list";
            }
        }
        return -1;
    }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number you want to find" << endl;
    int key;
    cin >> key;
    cout<<linear(arr, n ,key);
}