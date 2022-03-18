#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='H' || s[i]=='O' || s[i]=='L' || s[i]=='A' || s[i]=='P' || s[i]=='B' || s[i]=='E'|| s[i]=='T'|| s[i]=='I' || s[i]=='C'){
                continue;
            }else{
                cout<<s[i];
            }

        }
        cout<<"\n";
    }
    return 0;
} 