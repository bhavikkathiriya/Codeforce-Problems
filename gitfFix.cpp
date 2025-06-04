#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solution(int n,vector<int>& c,vector<int>& o){
    ll cmn=*min_element(c.begin(),c.end());
    ll omn=*min_element(o.begin(),o.end());
    ll count=0;
    for(int i=0;i<n;i++){
        int mnc=c[i]-cmn;
        int mno=o[i]-omn;
        count+=max(mnc,mno);
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>c(n);
        vector<int>o(n);
        for(auto& x:c) cin>>x;
        for(auto& x:o) cin>>x;
        cout<<solution(n,c,o)<<'\n';
    }
    return 0;
}