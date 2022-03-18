#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; 
    while(t--){
        long long m;
        cin>>m;
        long long count=0;
        count+= (long long)(sqrt(m));
        count+=(long long)(cbrt(m));
        int x = (int)(cbrt(m));
        x = (int)(sqrt(x));
        count-=x;
        cout<<count<<endl;
    }
    return 0;
} 