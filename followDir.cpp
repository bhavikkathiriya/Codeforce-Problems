#include<bits/stdc++.h>
using namespace std;

string solution(int n,string s){
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if(s[i]=='R') x++;
        else x--;
        if(x==1 && y==1) return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solution(n,s)<<'\n';
    }
    return 0;
}