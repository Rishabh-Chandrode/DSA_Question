#include <bits/stdc++.h> 
using namespace std; 
void swap(int a[],int x,int y){
    int z=a[x];
    a[x]=a[y];
    a[y]=z;
}
int partition(int l,int h,int a[]){
    int pivot = a[l];
    int i=l,j=h;
    while(i<j){
        while(a[i] <= pivot) i++;
        while(a[j] > pivot) j--;
        if(i<j){
            swap(a,i,j);
        }
    }
    swap(a,l,j);
    return j;
}
void quickSort(int l,int h,int a[]){
    if(l<h){
        int pivot = partition(l,h,a);
        quickSort(l,pivot-1,a);
        quickSort(pivot+1,h,a);
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
    quickSort(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
} 