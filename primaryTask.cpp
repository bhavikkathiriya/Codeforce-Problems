#include<bits/stdc++.h>
using namespace std;

string solution(int n){
    string s=to_string(n);
    if(s.length()<3){
        return "NO";
    }else if(s.length()==3){
        if(s[0]=='1' && s[1]=='0' && (s[2]=='0'||s[2]=='1')){
            return "NO";
        }else if(s[0]=='1' && s[1]=='0'){
            return "YES";
        }
    }else if(s.length()==4){
        if(s[0]=='1' && s[1]=='0' && s[2]=='0'){
            return "NO";
        }else if(s[0]=='1' && s[1]=='0'){
            return "YES";
        }
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solution(n)<<'\n';
    }
    return 0;
}