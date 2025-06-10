#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solution(int n,int m){
    if(n==1) return 0;
    else if(n==2) return m;
    return m*2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        cout<<solution(n,m)<<'\n';
    }
    return 0;
}