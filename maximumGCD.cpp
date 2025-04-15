#include<bits/stdc++.h>
using namespace std;

int maxGCD(int n){
    return n/2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<maxGCD(n)<<endl;
    }
    return 0;
}