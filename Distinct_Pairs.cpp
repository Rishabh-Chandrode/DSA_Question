#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> a,b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.push_back(make_pair(x,i));
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        b.push_back(make_pair(x,i));
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i].first<<" "<<a[i].second<<"\n";
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<b[i].first<<" "<<b[i].second<<"\n";
    // }
    
    for (int i = 0; i < m; i++)
    {
        cout<<a[0].second<<" "<<b[i].second<<"\n";
    }
    for (int i = 1; i < n; i++)
    {
        cout<<a[i].second<<" "<<b[m-1].second<<"\n";
    }
    
    
    
} 