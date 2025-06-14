#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,p,k;
    cin>>n>>k>>p;
    int count=abs(k)/p;
    if(count<=n){
        if(count*p==abs(k)) cout<<count<<'\n';
        else if(count+1<=n) cout<<count+1<<'\n';
        else cout<<-1<<'\n';
    }
    else cout<<-1<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}