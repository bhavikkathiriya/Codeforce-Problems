#include<bits/stdc++.h>
using namespace std;

int solution(int n,string s){
    int mx=0;
    for(char x:s){
        mx=max(mx,int(x)-96);
    }
    return mx;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solution(n,s)<<"\n";
    }
    return 0;
}