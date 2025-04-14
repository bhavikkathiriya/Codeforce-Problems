#include<bits/stdc++.h>
using namespace std;

int HQ(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        return 1;
    }
    return 0;
}
int main(){
    string s1;
    cin>>s1;
    HQ(s1);
    if(HQ(s1)) cout<<"YES";
    else cout<<"NO";
    return 0;
}