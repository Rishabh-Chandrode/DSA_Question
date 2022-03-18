#include <bits/stdc++.h> 
using namespace std;
void selectionSort(int a[],int n)
{
	int i=0,j=1,min=0;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if( a[j] < a[min]){
				min=j;
			}
		}
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
		
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
	selectionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 