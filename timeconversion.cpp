#include <bits/stdc++.h>
#include<iostream> 
using namespace std; 

int main() 
{
string s; cin>>s;
int num=0;
string hh="";
  string h = s.substr(0,2);

string m = s.substr(3,2);
string sec = s.substr(6,2);
string t = s.substr(8,2);
if(t=="PM"){
     if(h == "12"){
        cout<<"12"<<":"<<m<<":"<<sec<<endl;
    }
    else{
    num = stoi(h)
    num = num + 12;
    hh = to_string(num);

cout<<hh<<":"<<m<<":"<<sec<<endl;
    }
}else{
    if(h == "12"){
        cout<<"00"<<":"<<m<<":"<<sec<<endl;
    }
    else
    cout<<h<<":"<<m<<":"<<sec<<endl;
}
return 0; 
}