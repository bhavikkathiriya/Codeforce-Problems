#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>p(n+1);
    vector<int>r(n+1);
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
        r[p[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<r[i]<<" ";
    }
    return 0;
}