#include<bits/stdc++.h>
using namespace std;

void solution(int n){
    cout<<1<<' ';
    for(int i=n;i>=2;i--){
        cout<<i<<' ';
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solution(n);
        cout<<'\n';
    }
    return 0;
}