#include <bits/stdc++.h>


using namespace std;
int main()
{
    int row ;
    int col;
   int n;
   cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col>=n+1-row)
            {
               cout<<"#"; 
            }
            else{
                cout<<" ";
                
            }
        }
        cout<<endl;
    }
}
