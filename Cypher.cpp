#include<bits/stdc++.h>
using namespace std;

int num(int x,int n,string s){
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            x--;
            if(x<0) x=9;
        } else{
            x++;
            if(x==10) x=0;
        }
    }
    return x;
}

void solve(){
    int a;
    cin>>a;
    vector<int>v(a);
    string res="";
    for(auto& x:v) cin>>x;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        string s;
        cin>>s;
        res+=to_string(num(v[i],b,s))+" ";
    }
    cout<<res<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}