#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>puz(m);
    int mn=INT_MAX;
    for(int i=0;i<m;i++){
        cin>>puz[i];
    }
    sort(puz.begin(),puz.end());
    for(int i=0;i<=m-n;i++){
        mn=min({mn,puz[i+n-1]-puz[i]});
    }
    cout<<mn;
    return 0;
}