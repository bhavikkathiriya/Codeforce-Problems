#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& x:v)cin>>x;
    set<int>cpy(v.begin(),v.end());
    cout<<cpy.size()<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}