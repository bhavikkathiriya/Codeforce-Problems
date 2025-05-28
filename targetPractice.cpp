#include<bits/stdc++.h>
using namespace std;


int solution(vector<vector<char>>& sol){
    int target=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(sol[i][j]=='X'){
                target+=min({i,j,9-i,9-j})+1;
            }
        }
    }
    return target;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int target=0;
        vector<vector<char>>sol(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>sol[i][j];
            }
        }
        cout<<solution(sol)<<"\n";
    }
    return 0;
}