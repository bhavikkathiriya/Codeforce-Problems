#include<bits/stdc++.h>
using namespace std;

string squareString(string s){
    int mid=s.length()/2;
    if(s.length()%2!=0){
        return "NO";
    } else {
        for(int i=0;i<s.length()/2;i++){
            if(s[i]==s[mid]){
                mid++;
            } else {
                return "NO";
            }
        }
        return "YES";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<squareString(s)<<endl;
    }
    return 0;
}