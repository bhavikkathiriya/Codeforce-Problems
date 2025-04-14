#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    vector<int>twin(n);
    for(int i=0;i<n;i++){
        cin>>twin[i];
    }
    sort(twin.rbegin(),twin.rend());
    int ts=0,ms=0,tws;
    for(int i=0;i<twin.size();i++){
        ts+=twin[i];
    }
    tws=ts;
    for(int i=0;i<twin.size();i++){
        if(ms<=tws){
            ms+=twin[i];
            tws-=twin[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}