#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
    int n,v,w,i,l,h,time=INT_MAX,start,end,temp;
    cin>>n>>v>>w;
    vector<pair<int,int>> c;
    for ( i = 0; i < n; i++)
    {
        int start,end;
        cin>>start>>end;
        c.push_back(make_pair(start,end));
    }
    vector<int> vt,wt;
    for ( i = 0; i < v; i++)
    {
        int element;
        cin>>element;
        vt.push_back(element);
    }
    for ( i = 0; i < w; i++)
    {
        int element;
        cin>>element;
        wt.push_back(element);
    }
    sort(vt.begin(),vt.end());
    sort(wt.begin(),wt.end());
    for ( i = 0; i < n; i++)
    {
        vector<int>::iterator t1,t2;
        t1=upper_bound(vt.begin(),vt.end(),c[i].first);
        t2=lower_bound(wt.begin(),wt.end(),c[i].second);
        
        //cout<<t1-vt.begin()-1<<"_"<<t2-wt.begin()<<endl;
        if(c[i].second>wt[w-1]) continue;
        start=vt[t1-vt.begin()-1];
        end=wt[t2-wt.begin()];
        //cout<<t1-vt.begin()-1<<"_"<<t2-wt.begin()<<endl;
        temp=end-start+1;
        //cout<<start<<" "<<end<<" "<<temp<<" "<<time<<endl;
        if(temp<time)
        {
            time=temp;
        }
        
    }
    cout<<time;
    
} 