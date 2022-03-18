#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        long  double t1,t2,r1,r2,temp;
        cin>>t1>>t2>>r1>>r2;
        temp=(t1*t1)/(r1*r1*r1);
        if(temp==((t2*t2)/(r2*r2*r2))){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
} 