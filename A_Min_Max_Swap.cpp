#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,maxa=0,maxb=0,temp;
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(maxa<a[i]){
                maxa=a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            if(maxb<b[i]){
                maxb=b[i];
            }
        }

        if(maxa>maxb){
            for (int i = 0; i < n; i++)
            {
                if(a[i]==maxa){
                    continue;
                }else{
                    if(a[i]<b[i]){
                        temp=b[i];
                        b[i]=a[i];
                        a[i]=temp;
                    }
                    
                }
            }
            maxb=0;
            for (int i = 0; i < n; i++)
            {
                if(maxb<b[i]){
                    maxb=b[i];
                }
            }
        }else{
            for (int i = 0; i < n; i++)
            {
                if(b[i]==maxb){
                    continue;
                }else{
                    if(a[i]>b[i]){
                        temp=b[i];
                        b[i]=a[i];
                        a[i]=temp;
                    }
                }
            }
            maxa=0;
            for (int i = 0; i < n; i++)
            {
                if(maxa<a[i]){
                    maxa=a[i];
                }
            }
            
        }

        cout<<maxa*maxb<<endl;
        
        
    }
    return 0;
} 