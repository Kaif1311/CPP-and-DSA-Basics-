#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 

int main() 
{
    int arr[5];
    int mini = 0 , max = 0;
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    for(int i =0; i<4; i++)
    {
        
            mini += arr[i];
        
    }
    cout<<mini<<endl;
    for(int i =1; i<5; i++)
    {
        
            max += arr[i];
        
    }
    cout<<max;

return 0; 
}