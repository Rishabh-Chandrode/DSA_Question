#include <bits/stdc++.h> 
using namespace std; 
void insertion_sort(int a[],int n){
    int temp;
    for(int i=0;i<n;i++){
        int j=i+1;
        while(a[j] < a[j-1] && j>0 ){
            int t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j--;
        }
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
    insertion_sort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
} 