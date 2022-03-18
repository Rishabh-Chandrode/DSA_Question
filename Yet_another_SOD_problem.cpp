#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int l,r,start,length,sod=0;
        cin>>l>>r;
        int remain;
        remain=l;
        while(remain!=0)
        {
            sod=sod+(remain%10);
            remain=remain/10;
        }
        remain=3-(sod%3);
        start=l+remain;
        length=r-start;
        if(remain==3) cout<<(length/3)+2<<"\n";
        else if(length<0) cout<<0;
        else cout<<(length/3)+1<<"\n";
        ngjuyfut
        
    }
} 