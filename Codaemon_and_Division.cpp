#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int x,y,z,temp;
        cin>>x>>y>>z;
        temp=((x*1)+(y*2))-(z*3);
        if(temp%2==0) cout<<"0 \n";
        else cout<<"1 \n";
    }
    return 0;
} 