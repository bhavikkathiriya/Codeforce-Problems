#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve(){
    string s;
    cin>>s;
    int n=s.length(),ans=0;
    rep(i,0,n){
        rep(j,i+1,n){
            rep(k,j+1,n){
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q') ans++;
            }
        }
    }
    cout<<ans<<'\n';
} 

int main(){
    solve();
    return 0;
}