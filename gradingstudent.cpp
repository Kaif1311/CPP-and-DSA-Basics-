    #include <bits/stdc++.h>
    #include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i<n; i++){
        if(arr[i]>=38){
             if(arr[i]%5 == 0){
                cout<<arr[i]<<endl;
            }else{
                int val = (arr[i]/5)+1;
                val *= 5;
                int diff = val - arr[i];
                if(diff < 3){
                    cout<<val<<endl;
                }else{
                    cout<<arr[i]<<endl;
                }
            }
            }else{
                cout<<arr[i]<<endl;
            }
        }
        return 0;
    }
