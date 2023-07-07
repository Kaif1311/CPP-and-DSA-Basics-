#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    float post = 0 , neg = 0, zero = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        if(arr[i]<0){
            neg++;
        }else if(arr[i]>0){
            post++;
        }else {
            zero++;
        }
    }

    cout<<fixed<<setprecision(6)<<float(post/n)<<endl;
    cout<<fixed<<setprecision(6)<<float(neg/n)<<endl;
    cout<<fixed<<setprecision(6)<<float(zero/n);
return 0; 
}