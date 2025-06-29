#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& x:v) cin>>x;
    int cn=count(v.begin(),v.end(),v[0]);
    if(cn==n){
        cout<<"No"<<'\n';
        return ;
    } else {
        cout<<"Yes"<<'\n';
        cout<<v[0]<<' ';
        rrep(i,n-1,1) cout<<v[i]<<' ';
        cout<<'\n';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}