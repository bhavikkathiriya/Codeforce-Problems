#include<bits/stdc++.h>
using namespace std;

string spellCheck(string s,int n){
    if(n!=5){
        return "NO";
    } else {
        sort(s.begin(),s.end());
        if(s=="Timru"){
            return "YES";
        } else {
            return "NO";
        }
    }
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        cout<<spellCheck(s,n)<<endl;
    }
    return 0;
}