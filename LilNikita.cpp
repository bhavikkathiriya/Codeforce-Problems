#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,m;
    cin>>n>>m;
    if(n<m) cout<<"No"<<'\n';
    else if(n%2==m%2) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}