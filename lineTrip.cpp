#include<bits/stdc++.h>
using namespace std;

int solution(int n,int k,vector<int>& sol){
    vector<int>res;
    res.push_back(0);
    for(int i=0;i<n;i++){
        res.push_back(sol[i]);
        if(i==n-1) res.push_back(sol[i]+(2*(k-sol[i])));
    }
    for(int i=n-1;i>=0;i--){
        res.push_back(sol[i]);
    }
    res.push_back(0);
    int mx=0;
    for(int i=1;i<res.size();i++){
        mx=max(mx,res[i]-res[i-1]);
    }
    return mx;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>trip(n);
        for(auto& x:trip) cin>>x;
        cout<<solution(n,k,trip)<<"\n";
    }
    return 0;
}