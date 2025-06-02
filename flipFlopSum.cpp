#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int solution(int n,vector<int>& sol){
    ll sum=0;
    for(int i=0;i<n;i++) sum+=sol[i];
    for(int i=0;i<n-1;i++){
        if(sol[i]==-1 && sol[i+1]==-1){
            sol[i]=sol[i+1]=1;
            return sum+4;
        } 
    }
    for(int i=0;i<n-1;i++){
        if((sol[i]==-1 && sol[i+1]==1)||(sol[i]==1 && sol[i+1]==-1)){
            return sum;
        } 
    }
    return sum-4;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>flip(n);
        for(auto& x:flip) cin>>x;
        cout<<solution(n,flip)<<'\n';
    }
    return 0;
}