#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    for(char x:s) (x=='+'?a++:a--);
    cout<<abs(a)<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}
