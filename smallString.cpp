#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string res="";
    if(n<=27) {
        res+="aa";
        res+=static_cast<char>(n-2+96);
    }else if(n<=52){
        res+="a";
        res+=static_cast<char>(n-27+96);
        res+="z";
    }else{
        res+=static_cast<char>(n-52+96);
        res+="zz";
    }
    cout<<res<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}