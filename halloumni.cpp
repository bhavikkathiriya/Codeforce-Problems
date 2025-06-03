#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solution(int n,vector<ll>& sol,int k){
    vector<ll>cpy=sol;
    sort(cpy.begin(),cpy.end());
    if(cpy==sol || k>1) return "YES";
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll>box(n);
        for(auto& x:box) cin>>x;
        cout<<solution(n,box,k)<<'\n';
    }
    return 0;
}