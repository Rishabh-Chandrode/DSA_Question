// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        // Complete the function
        sort(arr,arr+n);
        vector<int> v;
        for(int i=0;i<n-1;i++){
            if(arr[i] <arr[i+1]){
                cout<<"i="<<i<<endl;
                v.push_back(n-i);
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}  // } Driver Code Ends