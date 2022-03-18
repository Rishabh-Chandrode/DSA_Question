#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int a,b;
        cin>>a>>b;
        int x=b-a,y=(a|b)-b;
        // cout<<x<<" "<<y<<"---"<<endl;
        if((a|b)==b){
            cout<<"1"<<endl;
        }else{
            if(x>y){
                cout<<y<<endl;
            }else{
                cout<<x<<endl;
            }
        }

    }
    return 0;
} 