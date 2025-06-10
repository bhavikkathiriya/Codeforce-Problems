#include<bits/stdc++.h>
using namespace std;

void solution(int n){
    cout<<n<<' ';
    for(int i=1;i<n;i++){
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