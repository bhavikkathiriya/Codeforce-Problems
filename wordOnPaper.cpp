#include<bits/stdc++.h>
using namespace std;

string solution(vector<vector<char>>& sol){
    string res="";
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(sol[i][j]!='.'){
                res+=sol[i][j];
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    vector<vector<char>>grid(8,vector<char>(8));
    while(t--){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>grid[i][j];
            }
        }
        cout<<solution(grid)<<"\n";
    }
    return 0;
}
