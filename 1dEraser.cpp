#include<bits/stdc++.h>
using namespace std;

int solution(int n,int k,string s){
    int i=0,count=0;
    while(i<n){
        if(s[i]=='B'){
            count++;
            i+=k;
        } else i++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout<<solution(n,k,s)<<'\n';
    }
    return 0;
}