// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	long long count=0;
    	sort(a,a+n);
    	int l=n-1,i=0,x=0,t=0;
        for( i=0;i<n;i++){
    	    if(a[i] < 0){
    	        x++;
    	    }else{
                break;
            }
    	}
        i=0;
    	while(a[i] < 0 && a[l] > 0){
    	    if(a[i]+a[l] >= 0){
    	        cout<<"a[i]+a[l]="<<a[i]<<"+"<<a[l]<<endl;
                t=(x-i);
                count+=(t*(t-1))/2;
                l--;
    	    }else{
    	        i++;
    	    }
    	}
    	cout<<count<<endl;
    	
    	i = n-i;
    	 x = (i*(i-1))/2;
    	count+=x;
    	return count;
    }   
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 

  // } Driver Code Ends