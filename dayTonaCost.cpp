#include<bits/stdc++.h>
using namespace std;

int daytonaCost(int n,vector<int>cost,int k){
    int ele=false;
    for(int i=0;i<n;i++){
        if(cost[i]==k){
            ele=true;
        }
    }
    return ele;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>cost(n);
        for(auto &ele:cost){
            cin>>ele;
        }
        int check=daytonaCost(n,cost,k);
        if(check==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}