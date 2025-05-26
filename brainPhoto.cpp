#include<bits/stdc++.h>
using namespace std;

string brainPhoto(int n,int m,vector<vector<char>>& solution){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(solution[i][j]=='C'||solution[i][j]=='M'||solution[i][j]=='Y'){
                return "#Color";
            }
        }
    }
    return "#Black&White";
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> brain(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brain[i][j];
        }
    }
    cout<<brainPhoto(n,m,brain);
    return 0;
}