#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& x:v) cin>>x;
    cout<<(v[0]==1?"Yes":"No")<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}