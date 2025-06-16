#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solution(){
    ll n;
    cin>>n;
    int len=to_string(n).length();
    ll ans=n-pow(10,len-1);
    cout<<ans<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}