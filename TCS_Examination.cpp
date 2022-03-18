#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int ddsa,dtoc,ddm,sdsa,stoc,sdm,dsum,ssum;
        cin>>ddsa>>dtoc>>ddm>>sdsa>>stoc>>sdm;
        dsum=ddsa+ddm+dtoc;
        ssum=sdsa+sdm+stoc;
        if(dsum>ssum) cout<<"DRAGON"<<endl;
        if(dsum<ssum) cout<<"SLOTH"<<endl;
        if(dsum==ssum){
            if(ddsa>sdsa) cout<<"DRAGON"<<endl;
            if(ddsa<sdsa) cout<<"SLOTH"<<endl;
            if(ddsa==sdsa){
                if(dtoc>stoc) cout<<"DRAGON"<<endl;
                if(dtoc<stoc) cout<<"SLOTH"<<endl;
                if(dtoc==stoc) {
                    cout<<"TIE"<<endl;
                }
            }
        }
    }
    return 0;
} 