#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    bool flag=true;
    vector<int>v(n);
    for(auto& x:v) cin>>x;
    for(int i=1;i<n;i++){
        if(abs(v[i]-v[i-1])==5 || abs(v[i]-v[i-1])==7){
            continue;
        } else{
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
