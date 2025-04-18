#include<bits/stdc++.h>
using namespace std;

int icpcballons(int n,string s){
    set<char>uni;
    for(int i=0;i<n;i++){
        uni.insert(s[i]);
    }
    return s.length()+uni.size();   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<icpcballons(n,s)<<endl;
    }
    return 0;
}