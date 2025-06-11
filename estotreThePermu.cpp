#include<bits/stdc++.h>
using namespace std;

void solution(int n,vector<int>& sol){
    vector<int>freq(1000,0);
    vector<int>res;
    for(int i=0;i<2*n;i++){
        if(freq[sol[i]]==0){
            res.push_back(sol[i]);
            freq[sol[i]]++;
        }
    }
    for(auto& x:res) cout<<x<<' ';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>per(2*n);
        for(auto& x:per) cin>>x;
        solution(n,per);
        cout<<'\n';
    }
    return 0;
}