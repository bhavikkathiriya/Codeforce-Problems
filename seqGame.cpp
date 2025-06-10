#include<bits/stdc++.h>
using namespace std;

void solution(int n,vector<int>& sol){
    vector<int>game;
    game.push_back(sol[0]);
    for(int i=1;i<n;i++){
        if(sol[i]>=sol[i-1]){
            game.push_back(sol[i]);
        }else {
            game.push_back(sol[i]);
            game.push_back(sol[i]);
        }
    }
    cout<<game.size()<<'\n';
    for(auto& x:game) cout<<x<<' ';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>game(n);
        for(auto& x:game) cin>>x; 
        solution(n,game);
        cout<<'\n';
    }
    return 0;
}