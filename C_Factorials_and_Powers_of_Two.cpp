#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; 
    long long mask=0,ans=LLONG_MAX;
    long long fact[16];
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<16;i++){
        fact[i]=fact[i-1]*i;
    }
    while(t--){
        long long int n;
        cin>>n;
        for(mask=0; mask < (1<<15) ;mask++){
            long long sum=0;
            long long count = __builtin_popcount(mask);
            for(int i=0;i<15;i++){
                if( mask & (1<<i) ) sum+=fact[i+1];
            }
            if(sum <= n){
                    long long val = __builtin_popcount(n-sum) + count;
                    ans = min(ans,val);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
} 