#include<bits/stdc++.h>
using namespace std;

string oddDivisor(long long n){
    if(n%2!=0 && n>1){
        return "YES";
    }
    if((n&(n-1))==0 && n>1){
        return "NO";
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<oddDivisor(n)<<endl;
    }
    return 0;
}

