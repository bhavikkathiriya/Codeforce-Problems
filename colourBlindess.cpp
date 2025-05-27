#include<bits/stdc++.h>
using namespace std;

string solution(string a,string b,int n){
    string s1="",s2="";
    for(int i=0;i<n;i++){
        if(a[i]=='R')s1+=a[i];
        if(b[i]=='R')s2+=b[i];
        if(a[i]=='G' ||a[i]=='B')s1+='G';
        if(b[i]=='G' ||b[i]=='B')s2+='G';
    }
    if(s1==s2)return "YES";   
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a;
        cin>>b;
        cout<<solution(a,b,n)<<"\n";
    }
    return 0;
}