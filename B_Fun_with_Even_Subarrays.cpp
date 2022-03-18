#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,i,count=1,op=0;
        cin>>n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int target=a[n-1];
        for ( i = n-2; i >= n/2; )
        {
            if(a[i]!=target){
                i=i-count;
                op++;
                count=count*2;
            }else{
                count++;
                i--;
            }
        }
        for ( ; i>=0 ; i--)
        {
            if(a[i] != target){
                op++;
                break;
            }
        }
        cout<<op<<endl;
        
        
        
    }
    return 0;
} 