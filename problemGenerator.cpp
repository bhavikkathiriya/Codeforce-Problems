#include<bits/stdc++.h>
using namespace std;

int solution(int n,int m,string s){
    int count=0;
    int f[7]={0};
    for(int i=0;i<n;i++){
        f[s[i]-'A']++;
    }
    for(int i=0;i<7;i++){
        if(f[i]<m){
            count+=m-f[i];
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        cout<<solution(n,m,s)<<'\n';
    }
    return 0;
}