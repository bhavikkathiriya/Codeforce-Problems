#include<bits/stdc++.h>
using namespace std;

void solution(int n,vector<vector<char>>& sol){
    vector<int>res;
    for(int i=n-1;i>=0;i--){
        for(int j=3;j>=0;j--){
            if(sol[i][j]=='#'){
                res.push_back(j+1);
            }
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<' ';
    }
    cout<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>>osu(n,vector<char>(4));
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>osu[i][j];
            }
        }
        solution(n,osu);
    }
    return 0;
}