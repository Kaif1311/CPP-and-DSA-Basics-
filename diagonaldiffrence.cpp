#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    long arr[n][n];
    for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    long long int suma = 0;
   long long int sumb = 0;
   for(int i =0; i<n; i++)
    {for(int j = 0; j<n; j++){
        if(i==j){
        suma += arr[i][i];
    }}
    }
     for(int i =0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {if(i==n-j-1){
                    sumb += arr[i][j];
       
    }}}
    long long int sum = 0;
    
    sum = abs(suma - sumb);
    cout<<sum;
return 0;
}