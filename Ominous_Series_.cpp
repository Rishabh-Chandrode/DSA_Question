#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n;
    cin>>n;
    string s="";
    while(n>=1){
        if(n&1){
            s+="1";
            n=(n-1)/2;
        }else{
            s+="5";
            n=(n-2)/2;
        }
        
    }
        reverse(s.begin(),s.end());
        cout<<s;
    return 0;
} 