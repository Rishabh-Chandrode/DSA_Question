#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int ;
    long long int sum=0,a,b,t,i,j;
    cin>>a>>b;
    if(a>b){
        t=b;
        b=a;
        a=t;
    }
    for( i=a+1;i<=b;i++){
        for( j=1;j<=sqrt(i);j++){
            if(i%j==0){
                if(j==(i/j)){
                    sum=sum+j;
                }else{
                    sum=sum+j+(i/j);
                }
            }
        }
    }
    cout<<sum;
    return 0;
} 