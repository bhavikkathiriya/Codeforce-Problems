#include<bits/stdc++.h>
using namespace std;

int solution(int n,int k,vector<int>& a,vector<int>& b){
    int sum=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<k;i++){
        if(a[i]>=b[n-i-1]){
            sum+=a[i];
        } else{
            sum+=b[n-i-1];
        }
    }
    for(int i=k;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(auto& ele:a){
            cin>>ele;
        }
        for(auto& ele:b){
            cin>>ele;
        }
        cout<<solution(n,k,a,b)<<endl;
    }
}