#include<bits/stdc++.h>
using namespace std;

string doNotBeDistracted(int n,string s){
    string res="";
    res+=s[0];
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            res+=s[i];
        }
    }
    for(int i=0;i<res.length();i++){
        for(int j=i+1;j<res.length();j++){
            if(res[i]==res[j]){
                return "NO";
            }
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<doNotBeDistracted(n,s)<<endl;
    }

    return 0;
}