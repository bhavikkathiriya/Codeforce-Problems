#include<bits/stdc++.h>
using namespace std;

string queueAtSchool(string s,int t){
    while(t--){
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    return s;
}
int main(){
    string s;
    int t;
    int len;
    cin>>len>>t;
    cin>>s;
    cout<<queueAtSchool(s,t)<<endl;
    return 0;
}
