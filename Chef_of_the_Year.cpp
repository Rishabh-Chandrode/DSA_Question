#include<bits/stdc++.h>
#include <iostream> 
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
 map<string, string>mp;
    map<string, int> mp1, mp2;


    for (int i = 0; i < n; i++)
    {
        string name, country;
        cin >> name >> country;
        mp[name] = country;
    }

    for (int i = 0; i < m; i++)
    {
        string name;
        cin >> name;
        mp1[name]++;
        mp2[mp[name]]++;
    }
    
    int count=0;
    string name1;
    for(auto it=mp1.begin();it!=mp1.end();it++)
    {
        if(it->second >count)
        {
            count=it->second;
            name1=it->first;
        }
    }
     int count1=0;
    string country1;
    for(auto it1=mp2.begin();it1!=mp2.end();it1++)
    {
        if(it1->second >count1)
        {
            count1=it1->second;
            country1=it1->first;
        }
    }
   
    cout<<country1<<endl;
     cout<<name1<<endl;
    return 0;
    
}