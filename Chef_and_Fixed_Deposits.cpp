#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    int t;
    cin>>t; 
    while(t--){
        int n,x,temp,sum=0,count=0;
        cin>>n>>x;
        priority_queue<int> fd;
        for (int i = 0; i < n; i++)
        {
            cin>>temp;
            fd.push(temp);
        }
        while(x>0){
            x=x-fd.top();
            count++;
            fd.pop();
            if(fd.empty()){
                count=-1;
                break;
            }
        }   
        cout<<count<<endl;
    }
    return 0;
} 