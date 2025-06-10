#include<bits/stdc++.h>
using namespace std;

void solution(string s){
    int c=count(s.begin(),s.end(),s[0]);
    if(c==s.length()){
        cout<<"NO"<<'\n';
    } else{
        cout<<"YES"<<'\n';
        cout<<s[s.length()-1];
        for(int i=0;i<s.length()-1;i++){
            cout<<s[i];
        }
        cout<<'\n';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        solution(s);
    }
    return 0;
}