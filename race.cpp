#include<bits/stdc++.h>
using namespace std;

void solution(){
    int a,x,y;
    cin>>a>>x>>y;
    cout<<((abs(x-y)<max(abs(a-x),abs(a-y)))?"Yes":"No")<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}