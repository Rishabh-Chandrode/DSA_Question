#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v,s;
        vector<int> :: iterator pos;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        s.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            pos=upper_bound(s.begin(),s.end(),v[i]);
            //cout<<pos-s.begin();
            if(pos-s.begin()==s.size()) s.push_back(v[i]);
            else s[pos-s.begin()]=v[i];

            
        }
        cout<<s.size()<<" ";
        for (int i = 0; i < s.size(); i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<"\n";
        
        
        
        
    }
    
} 