#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,flag=0;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    auto ls=mp.begin();
    if(mp.size()==1) flag=1;
    else if(mp.size()==2){
        int c1=ls->second;
        ls++;
        int c2=ls->second;
        if((abs(c1-c2)==1 && n%2!=0) || (c1==c2 && n%2==0)) flag=1;
    }
    cout<<(flag?"Yes":"No")<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}