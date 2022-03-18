#include <bits/stdc++.h> 
using namespace std; 
int log_a_to_base_b(int a, int b)
{
    return log(a) / log(b);
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    long long count = (n*m) - m + 1 ;
    if(n>=4 ){
        count = count- (int) log_a_to_base_b(m, m*m);
    }
    cout<<count<<endl;
    return 0;
} 