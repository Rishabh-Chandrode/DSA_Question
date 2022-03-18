#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t,i,count=0;
    cin>>t;
    while(t--){
       int n,z,temp,count=0;
       cin>>n>>z;
       priority_queue<int> q;
       for (int i = 0; i < n; i++)
       {
           cin>>temp;
           q.push(temp);
       }
       while (z>0)  
       {
           //cout<<q.top()<<endl;
           z=z-q.top();
           count++;
           temp=q.top()/2;
           q.pop();
           q.push(temp);
           if(q.top()==0){
               count=-1;
               break;
           }
           
       }
       if(count==-1){
           cout<<"Evacuate"<<endl;
       }else{
       cout<<count<<endl;
       }
       
    }
} 