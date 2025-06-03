#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solution(int n,vector<vector<int>>& sol){
    int mx=0,win=0;
    for(int i=0;i<n;i++){
        if(sol[i][0]<=10){
            if(sol[i][1]>mx){
                mx=sol[i][1];
                win=i+1;
            }
        }
    }
    return win;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>ten(n,vector<int>(2));
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>ten[i][j];
            }
        }
        cout<<solution(n,ten)<<'\n';
    }
    return 0;
}