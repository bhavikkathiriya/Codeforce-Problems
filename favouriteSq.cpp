#include<bits/stdc++.h>
using namespace std;

void solution(int n,vector<int>& sol){
    int i=0,j=n-1;
    vector<int>res;
    while(i<j){
            res.push_back(sol[i]);
            res.push_back(sol[j]);
            i++;
            j--;
    }
    if(n%2!=0) res.push_back(sol[n/2]);
    for(int x:res) cout<<x<<' ';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>fav(n);
        for(auto& x:fav) cin>>x;
        solution(n,fav);
        cout<<'\n';
    }
    return 0;
}