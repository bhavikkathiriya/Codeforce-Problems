#include<bits/stdc++.h>
using namespace std;

int loveStory(string s){
    string c="codeforces";
    int ind=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=c[i]) ind++;
    }
    return ind;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<loveStory(s)<<endl;
    }
    return 0;
}