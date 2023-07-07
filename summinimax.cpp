#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr , arr + n);
    int sum = 0;
    sum = arr[0]+arr[n-1];
    cout<<sum<<endl;

return 0; 
}