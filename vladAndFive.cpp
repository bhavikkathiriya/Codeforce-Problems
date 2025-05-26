#include<bits/stdc++.h>
using namespace std;

char vladAndFive(string s){
    sort(s.begin(),s.end());
    return s[2];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<vladAndFive(s)<<endl;
    }
    return 0;
}