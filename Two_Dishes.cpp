#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,fr,v,fi;
        cin>>n>>fr>>v>>fi;
        if(v<n || (fr+fi)<n) cout<<"NO \n";
        else{
            cout<<"YES"<<"\n";
        }
    }
    
} 