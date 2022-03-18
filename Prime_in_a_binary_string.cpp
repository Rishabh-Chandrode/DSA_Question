#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        string s;
        cin>>s;
        int size=s.size(),check=0;
        for(int i=0;i<size;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                check=1;
            }
            if(s[i]=='1' && s[i+1]=='1'){
                check=1;
            }
            if(check==1) break;
        }
        if(check==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
} 