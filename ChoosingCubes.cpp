#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,f,k,cb=0,ca=0;
    cin>>n>>f>>k;
    vector<int>fs(n);
    for(auto& x:fs) cin>>x;

    int grn=fs[f-1];
    sort(fs.begin(),fs.end(),greater<>());
    for(int i=0;i<k;i++) if(fs[i]==grn) cb++;
    if(cb==0){
        cout<<"NO"<<'\n';
        return ;
    }
    for(int i=k;i<n;i++) if(fs[i]==grn) ca++;
    if(ca>=1) cout<<"MAYBE"<<'\n';
    else cout<<"YES"<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}