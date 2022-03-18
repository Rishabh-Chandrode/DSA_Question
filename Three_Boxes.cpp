#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,temp;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d) cout<<"1 \n";
        else{
            temp=((a+b+c)-d)/d;
            cout<<temp+2<<"\n";
        }
    }
} 