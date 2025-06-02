#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    if(n==1) return 1;
    return (n+1)/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solution(n)<<'\n';
    }
    return 0;
}

