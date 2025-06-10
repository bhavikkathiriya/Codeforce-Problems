#include<bits/stdc++.h>
using namespace std;

void solution(int n,vector<int>& sol){
    int fMx=*max_element(sol.begin(),sol.end());
    vector<int>cp=sol;
    sort(cp.begin(),cp.end());
    int mx=0;
    for(int i=0;i<n;i++){
        sol[i]=sol[i]-fMx;
        if(sol[i]==fMx){
            sol[i]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(sol[i]==0) cout<<fMx-cp[n-2]<<' ';
        else cout<<sol[i]<<' ';
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ad(n);
        for(auto& x:ad) cin>>x;
        solution(n,ad);
        cout<<'\n';
    }
    return 0;
}