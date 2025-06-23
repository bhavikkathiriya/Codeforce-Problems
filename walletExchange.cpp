#include<bits/stdc++.h>
using namespace std;

void solution(){
    int a,b;
    cin>>a>>b;
    cout<<((a%2==b%2)?"Bob":"Alice")<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}