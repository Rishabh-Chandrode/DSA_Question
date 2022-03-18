#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,r1,r2,r3,g1,g2,g3,b1,b2,b3,count;
        cin>>n>>r1>>r2>>r3>>g1>>g2>>g3>>b1>>b2>>b3;
        if(b1>r3){
            count=n-r1+g3;
        }else{
            count=n-r1+b2;
        }
        cout<<count<<endl;
    }
    return 0;
} 