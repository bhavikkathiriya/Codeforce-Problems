#include<bits/stdc++.h>
using namespace std;

pair<int,int> solution(int n){
    return {1,n-1};
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solution(n).first<<' '<<solution(n).second<<'\n';
    }
    return 0;
}