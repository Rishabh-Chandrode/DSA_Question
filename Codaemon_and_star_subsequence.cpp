#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,countOf1=0,countOf0=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==1) countOf1++;
            if(a[i]==0) countOf0++;

        }
        cout<<countOf1*pow(2,countOf0)<<"\n";
    }
    return 0;
} 