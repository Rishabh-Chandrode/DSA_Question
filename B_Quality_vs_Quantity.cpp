#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        long long  countR=0,countB=0,sumR=0,sumB=0,l=n-1,i=1,check=1;
        countB++;
        sumB=a[0];
        while(l>i){
            sumR+=a[l];
            countR++;
            sumB+=a[i];
            countB++;
            
            if( (sumR > sumB) && (countR < countB) ){
                cout<<"YES"<<endl;
                check=0;
                break;
            }
            l--;
            i++;
        }
        if(check){
            cout<<"NO"<<endl;
        }
    }
    return 0;
} 