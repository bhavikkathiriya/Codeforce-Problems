#include<bits/stdc++.h>
using namespace std;

int solution(string s){
    return (s[0]-'0'+s[2]-'0');
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solution(s)<<endl;
    }
    return 0;
}