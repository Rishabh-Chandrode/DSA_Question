#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,min=INT_MAX,mini,maxi,max=INT_MIN;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(min>a[i]){
                min=a[i];            
                mini=i;               
            } 
            if(max<a[i]){
                max=a[i];
                maxi=i;
            }
        }
        int mind,maxd,pop;
        if(mini>n/2) {
            mind=n-mini;
        }else{
            mind=mini+1;
        }
        if(maxi>n/2) {
            maxd=n-maxi;
        }
        else{
            maxd=maxi+1;
        }
        if(mind<maxd){
            pop=mind;
            n=n-pop;
            if(maxi>n/2) {
                maxd=n-maxi;
            }
            pop=pop+maxd;
        }else{
            pop=maxd;
            if(mini>n/2) {
                mind=n-mini;
            }
            pop=pop+mind;
        }
        cout<<pop<<"\n";
        
        
    }
    
} 