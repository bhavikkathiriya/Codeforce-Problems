#include<bits/stdc++.h>
using namespace std;

void solution(){
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        for(auto& x:v) cin>>x;
        int st=min(abs(s-v[0])+v[n-1]-v[0],abs(s-v[n-1])+v[n-1]-v[0]);
        cout<<st<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
}