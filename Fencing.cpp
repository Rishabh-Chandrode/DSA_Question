#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    while (t--){
        int n,m,k;
        cin>>n>>m>>k;
        map<pair<int,int>,int> mp;
        map<pair<int,int>,int>::iterator it;
        for (int i = 0; i < k; i++)
        {
            int x,y;
            cin>>x>>y;
            mp.insert({{x,y},1});
        }
        // for ( it = mp.begin(); it !=mp.end(); it++)
        // {
        //     cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<"\n";
        // }
        int count=0;
        for ( it = mp.begin(); it !=mp.end(); it++){
            int x=it->first.first;
            int y=it->first.second;
            if(mp.find(make_pair(x-1,y))==mp.end()) {
                count++;
                //cout<<"l"<<count<<"\n";
            }
            if(mp.find(make_pair(x+1,y))==mp.end() ) {
                count++;
                //cout<<"r"<<count<<"\n";
            }
            if(mp.find(make_pair(x,y-1))==mp.end()) {
                count++;
                //cout<<"d"<<count<<"\n";
            }
            if(mp.find(make_pair(x,y+1))==mp.end()) {
                count++;
                //cout<<"u"<<count<<"\n";
            }
        }
        
        cout<<count<<"\n";
    }
} 