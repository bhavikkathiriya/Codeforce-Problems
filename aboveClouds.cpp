#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto& x:s) mp[x]++;
    for(int i=1;i<n-1;i++){
        if(mp[s[i]]>1) {
            cout<<"Yes"<<'\n';
            return ;
        }
    }
    cout<<"No"<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}