#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        long long int n,d,x=1;
        cin>>n>>d;
        for(int i=0;i<d;i++){
            if(i<=9) x=x*2;
            if(i>9) x=x*3;
            if(x>=n) {
                x=n;
                break;
                }
        }
        cout<<x<<endl;
    }
    return 0;
} 