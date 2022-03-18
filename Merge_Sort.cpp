#include <bits/stdc++.h> 
using namespace std; 
merge(int l,int mid,int r,int a[]){
    int i=l,j=mid+1,k=0,m=0;
    int temp[r-l+1];
    while(i<=mid && j<=r){
        if(a[i] < a[j]){
            temp[k]=a[i];
            i++;
        }else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k]=a[j];
        j++;
        k++;
    }
    for(int t=l;t<=r;t++){
        a[t]=temp[m];
        m++;
    }
}
mergesort(int l,int r,int a[]){
    int mid=0;
    if(l<r){
        mid=(l+r)/2;
        mergesort(l,mid,a);
        mergesort(mid+1,r,a);
        merge(l,mid,r,a);
    }
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
} 