#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x=1;
    while(n>1){
        x*=2;
        n/=2;
    }
    cout<<(x-1)<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}