#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,min=INT_MAX;
        cin>>n;
        vector<long long int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
         for (int i = 0; i < n; i++)
        {
            cout<<" "<<v[i];
            // if(min>(v[i]-v[i-1])){
            //     min=v[i]-v[i-1];
            // }
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < n; i++)
        {
            cout<<" "<<v[i];
            // if(min>(v[i]-v[i-1])){
            //     min=v[i]-v[i-1];
            // }
        }
        cout<<min;
        
        
    }
    return 0;
} 