#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int a= 0;
    sort(arr , arr+n);
    int maxi = arr[n-1];
    for(int i = 0; i<n; i++){
        if(maxi==arr[i]){
            a++;
        }
    }
    cout<<a;
return 0; 
}