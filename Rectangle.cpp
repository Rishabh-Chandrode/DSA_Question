#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int n,max=0,min=100000,i,area,temp;
    cin>>n;
    vector<pair<int,int>> p;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>max) max=x;
        if(x<min) min=x;
        p.push_back(make_pair(x,y));
    }
    sort(p.begin(),p.end());
    area=min*500;
    temp=500*(100000-max);
    if(temp>area) area=temp;
    for ( i = 0; i < n-1; i++)
    {
        if(min<p[i].second){
            temp=p[i+1].first*min;
        }else{
            temp=p[i+1].first*p[i].second;
            min=p[i].second;
        }


        if(temp>area) area=temp;
    }
    
    cout<<area;
    return 0;
    
    
     
} 