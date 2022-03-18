#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==4 && k==3){
            cout<<"-1"<<endl;
            
        }else{
            if(k==0){
            for(int i=0;i<n/2;i++){
                cout<<i<<" "<<n-1-i<<endl;
            }
            
            }else{
                cout<<k<<" "<<n-1<<endl;
                cout<<0<<" "<<n-1-k<<endl;
                for(int i=1;i<n/2;i++){
                    if(i==k || i==n-1-k){
                        continue;
                    }else{
                        cout<<i<<" "<<n-1-i<<endl;
                    }
                }
            }

        }
        
    }
    return 0;
} 