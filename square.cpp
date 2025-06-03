#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>>& sol){
    int x1=sol[0][0],x2;
    for(int i=1;i<4;i++){
        if(sol[i][0]!=x1) {
            x2=sol[i][0];
            break;
        }
    }
    int sq=max(x1,x2)-min(x1,x2);
    return sq*sq;
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>>sq(4,vector<int>(2));
    while(t--){
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cin>>sq[i][j];
            }
        }
        cout<<solution(sq)<<endl;
    }
    return 0;
}