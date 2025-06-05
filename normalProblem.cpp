#include<bits/stdc++.h>
using namespace std;

string solution(string s){
    string res="";
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='q') res+='p';
        else if(s[i]=='p') res+='q';
        else res+='w';
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solution(s)<<'\n';
    }
    return 0;
}