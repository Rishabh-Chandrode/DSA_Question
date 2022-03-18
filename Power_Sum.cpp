#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        long long int n,sum=0,min=1048576,temp,index,target;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
            if(min>a[i]){
                min=a[i];
                index=i+1;
            }
        }
        if(ceil(log2(sum)) == floor(log2(sum))){
            
            cout<<"0"<<endl;
            
        }else{
            temp=log2(sum);
            temp++;
            target=pow(2,temp)-sum;
            target=target/min;
            cout<<"1"<<endl;
            cout<<"1"<<" "<<target+1<<endl;
            cout<<index<<endl;
        }
    }
    return 0;
} 