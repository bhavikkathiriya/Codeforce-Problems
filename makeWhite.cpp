#include<bits/stdc++.h>
using namespace std;

int solution(int n,string s){
    int i=0,j=n-1;
    while(i<=j){
        if(s[i]=='B' && s[j]=='B'){
            return j-i+1;
        } else if(s[i]!='B'){
            i++;
        } else {
            j--;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solution(n,s)<<'\n';
    }
    return 0;
}