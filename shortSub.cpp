#include<bits/stdc++.h>
using namespace std;

string shortSub(string s){
    string res="";
    res+=s[0];
    for(int i=1;i<s.length()-1;i+=2){
        res+=s[i];
    }
    res+=s[s.length()-1];
    return res;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        cout<<shortSub(s)<<endl;
    }
    return 0;
}