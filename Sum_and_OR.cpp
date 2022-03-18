#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int x,s;
        cin>>x>>s;
        if(((s-x)%2)!=0) {
            cout<<"-1"<<endl;
            continue;
        }
        if(x==1){
            cout<<s<<endl;
            continue;
        }else{
            cout<<"3"<<endl;
        }
        
    }
    return 0;
} 