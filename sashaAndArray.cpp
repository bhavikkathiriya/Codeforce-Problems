#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n,sum=0;
    cin>>n;
    vector<int>v(n);
    for(auto& x:v) cin>>x;
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i!=j){
        sum+=(v[j]-v[i]);
        i++;
        j--;
        if(i>j) break; 
    }
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}