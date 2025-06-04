#include<bits/stdc++.h>
using namespace std;

int solution(int n,int m,int k,vector<int>& b,vector<int>& c){
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int i=0,j=m-1,sum=0;
    while(i<n && j>=0){
        if(b[i]+c[j]<=k){
            sum+=(j+1);
            i++;
        } else{
            j--;
        }
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>b(n);
        vector<int>c(m);
        for(auto& x:b) cin>>x;
        for(auto& x:c) cin>>x;
        cout<<solution(n,m,k,b,c)<<'\n';
    }
    return 0;
}