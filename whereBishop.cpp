#include<bits/stdc++.h>
using namespace std;

void solution(){
    vector<string>v(8);
    for(int i=0;i<8;i++) cin>>v[i];
    int upCnt=count(v[0].begin(),v[0].end(),'#'),cnt=0;
    string res="";
    for(int i=1;i<8;i++){
        int cnt=count(v[i].begin(),v[i].end(),'#');
        if(upCnt==2 && cnt==1){
            for(int j=0;j<8;j++){
                if(v[i][j]=='#'){
                    res=(to_string(i+1)+" "+to_string(j+1));
                    cout<<res<<'\n';
                    return;
                }
            }
        }
        upCnt=cnt;
    }
    cout<<res<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}