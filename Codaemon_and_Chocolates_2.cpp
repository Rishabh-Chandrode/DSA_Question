#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,l,u,b,sum=0;
        cin>>n>>l>>u>>b;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=l && x<=u){
                v.push_back(x);
                sum=sum+x;
            }
        }
        sort(v.begin(),v.end());
        if(sum<=b){
            cout<<v.size()<<"\n";
        }else{
            int t=sum-b;
            if(t<=v[v.size()-1]){
                cout<<v.size()-1<<"\n";
            }
        }
    }
    return 0;
} 