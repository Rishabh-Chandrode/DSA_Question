#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        char p1,p2,p3,c1,c2;
        int count1=0,count2=0;
        cin>>p1>>p2>>p3>>c1>>c2;
        if(c1==p1) count1=1;
        else if(c1==p2) count1=2;
        else if(c1==p3) count1=3;

        if(c2==p1) count2=1;
        else if(c2==p2) count2=2;
        else if(c2==p3) count2=3;
        // cout<<count1<<count2;
        if(count1<=count2){
            cout<<c1<<endl;
            
        }else{
            cout<<c2<<endl;
        }
    }
    return 0;
} 