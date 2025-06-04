#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string solution(ll a,ll b,ll c){
    if((a+(c-1)/2+1>b+c/2)) return "First";
    return "Second";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<solution(a,b,c)<<'\n';
    }
    return 0;
}
