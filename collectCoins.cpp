#include<bits/stdc++.h>
using namespace std;

string solution(int a,int b,int c,int n){
    int mx=max({a,b,c});
    int need=(mx-a)+(mx-b)+(mx-c);
    if(n<need) return "NO";
    n-=need;
    return (n%3==0)?"YES":"NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        cout<<solution(a,b,c,n)<<"\n";
    }
    return 0;
}