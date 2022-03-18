#include <bits/stdc++.h> 
using namespace std; 
void swap(int a[] ,int x,int y){
    int t=a[x];
    a[x] = a[y];
    a[y] = t;
}
void heapify(int arr[],int n,int i){
    int largest=i;
    int r=(2*i)+2;
    int l=(2*i)+1;
    if(l<n && arr[l] > arr[largest]){
        largest = l;
    }
    if(r<n && arr[r] > arr[largest]){
        largest = r;
    }
    if(largest != i){
        swap(arr,i,largest);
        heapify(arr,n,largest);
    }
}
void heapSort(int a[],int n){
    for (int  i = n/2 -1; i >=0; i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(a,0,i);
        heapify(a,i,0);
    }
    
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    heapSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
} 