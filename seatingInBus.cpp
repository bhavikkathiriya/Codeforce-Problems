#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& sol){
    vector<int>seat(n,0);
    seat[sol[0]-1]=1;
    for(int i=1;i<n;i++){
        int j=sol[i];
        if(j==1){
            if(j<n && seat[j]!=1)return "NO";
        }else if(j==n){
            if(j-2>=0 && seat[j-2]!=1) return "NO";
        }else{
            if((j-2>=0 && seat[j-2]!=1) && (j<n && seat[j]!=1))return "NO";
        }
        seat[j-1]=1;
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>bus(n);
        for(auto& x:bus) cin>>x;
        cout<<solution(n,bus)<<'\n';
    }
    return 0;
}