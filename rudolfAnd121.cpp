#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& sol){
    for(int i=1;i<n-1;i++){
        if(sol[i]>1 && sol[i-1]!=0 && sol[i+1]!=0){
            sol[i]-=2;
            sol[i-1]-=1;
            sol[i+1]-=1;
        }
    }
    int sum=0;
    for(int x:sol) sum+=x;
    if(sum==0) return "YES";
    return "NO"; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>rud(n);
        for(auto& x: rud) cin>>x;
        cout<<solution(n,rud)<<'\n';
    }
    return 0;
}