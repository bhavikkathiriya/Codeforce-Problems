#include<bits/stdc++.h>
using namespace std;

string solution(int n,int x,vector<int>& sol){
    int i=0,count=0;
    while(i<n){
        if(sol[i]==1){
            i+=x;
            count++;
        }else {
            i++;
        }
    } if(count>1) return "NO";
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>f(n);
        for(auto&x:f) cin>>x;
        cout<<solution(n,x,f)<<'\n';
    }
    return 0;
}