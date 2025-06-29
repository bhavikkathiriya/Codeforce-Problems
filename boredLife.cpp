#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long 

ll fact(int n){
    ll f=1;
    rep(i,1,n+1) f*=i;
    return f;
}
void solve(){
    ll a,b;
    cin>>a>>b;
    cout<<fact(min(a,b))<<'\n';
}
int main(){
    solve();
    return 0;
}