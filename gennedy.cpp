#include<bits/stdc++.h>
using namespace std;

string solution(string s,vector<string>& sol){
    for(int i=0;i<5;i++){
        if(sol[i][0]==s[0]||sol[i][1]==s[1]){
            return "YES";
        }
    }
    return "NO";
}
int main(){
    string s;
    cin>>s;
    vector<string> card(5);
    for(auto& x:card) cin>>x;
    cout<<solution(s,card)<<'\n';
    return 0;
}