#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int k=n/2;
    return n/k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solution(n)<<"\n";
    }
    return 0;
}