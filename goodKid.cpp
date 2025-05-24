#include<bits/stdc++.h>
using namespace std;

int goodKids(int n,vector<int>& goodKid){
    int min=*min_element(goodKid.begin(),goodKid.end());
    int minIdx=distance(goodKid.begin(),min_element(goodKid.begin(),goodKid.end()));
    int mul=1;
    for(int i=0;i<n;i++){
        if(i==minIdx){
            goodKid[minIdx]++;
        }
        mul*=goodKid[i];
    }
    return mul;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>goodKid(n);
        for(int i=0;i<n;i++){
            cin>>goodKid[i];
        }
        cout<<goodKids(n,goodKid)<<endl;
    }
    return 0;
}