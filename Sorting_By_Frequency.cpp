// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

bool compare(pair<int,int> x,pair<int,int> y){
    if(x.second == y.second) return x.first < y.first;
    return x.second > y.second;
}
class Solution{
    public:
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        sort(arr,arr+n);
        vector< pair<int,int>> p;
        vector<int> v;
        int k=0;
        p.push_back(make_pair(arr[0],1));
        
        for(int i=0;i<n-1;i++){
            if(arr[i+1] == arr[i]){
                p[k].second+=1;
            }
            if(arr[i+1] > arr[i]){
                p.push_back(make_pair(arr[i+1],1));
                k++;
            }
            
        }
       
        sort(p.begin(),p.end(),compare);
        
        
        
        for(int i=0;i<=k;i++){
            for(int j=0;j<p[i].second;j++){
                v.push_back(p[i].first);
            }
        }
        return v;
    }
};
// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}

  // } Driver Code Ends