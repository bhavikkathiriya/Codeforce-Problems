#include<bits/stdc++.h>
using namespace std;

int solution(int n,int m,string x,string s){
    int count=0;
    if(x.find(s)!=string::npos) return 0;
    while(count<=6){
        x+=x;
        count++;
        if(x.find(s)!=string::npos) return count;
    }
    if(x.find(s)==string::npos) return -1;
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        cout<<solution(n,m,x,s)<<'\n';
    }
    return 0;
}