#include<bits/stdc++.h>
using namespace std;

int solution(int n,int k,vector<int>& sol){
    int count=0;
    int rob=0;
    for(auto& x:sol){
        if(x>=k){
            rob+=x;
        } else{
            if(rob!=0 && x==0){
                rob--;
                count++;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>rob(n);
        for(auto&x:rob) cin>>x;
        cout<<solution(n,k,rob)<<'\n';
    }
    return 0;
}