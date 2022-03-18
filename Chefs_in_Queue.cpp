#include <bits/stdc++.h> 
using namespace std; 
#define mod 1000000007
int main() 
{
    int n,k;
    long long ans=1;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    stack<int> s;
    s.push(n-1);
    for (int i = n-2; i >=0 ; i--)
    {
        while(!s.empty() && a[s.top()]>=a[i])
        s.pop();
        if(!s.empty())
        ans = ((ans % mod) * ((s.top() % mod) - (i % mod) + 1) % mod) % mod;
        s.push(i);
    }
    cout<<ans;
    return 0;
    
} 