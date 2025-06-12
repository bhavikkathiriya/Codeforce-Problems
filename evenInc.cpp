#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& v){
    for(int i=2;i<n;i++){
        if(v[i]%2!=v[i-2]%2) return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto& x:v) cin>>x;
        cout<<solution(n,v)<<'\n';
    }
    return 0;
}