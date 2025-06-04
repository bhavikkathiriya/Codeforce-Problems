#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& sol){
    int mi=0,bi=0;
    for(int i=0;i<n;i++){
        if(sol[i]%2==0) mi+=sol[i];
        else bi+=sol[i];
    }
    if(bi>=mi) return "NO";
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>cand(n);
        for(auto& x:cand) cin>>x;
        cout<<solution(n,cand)<<'\n';
    }
    return 0;
}