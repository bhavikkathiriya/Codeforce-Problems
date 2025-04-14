#include<bits/stdc++.h>
using namespace std;

string shortSort(string s){
    if(s[0]=='a' && s[1]=='b' && s[2]=='c'){
        return "YES";
    } else {
        if(s[0]=='a') return "YES";
        else if(s[1]=='b') return "YES";
        else if(s[2]=='c') return "YES";
        else return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<shortSort(s)<<endl;
    }
    return 0;
}