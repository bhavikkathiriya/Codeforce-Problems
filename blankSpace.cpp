#include<bits/stdc++.h>
using namespace std;

int blankSpace(int n,vector<int>& space){
    int current=0;
    int maxs=0;
    for(int i=0;i<n;i++){
        if(space[i]==0){
            current++;
            maxs=max(current,maxs);
        } else {
            current=0;
        }
    }
    return maxs;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>space(n);
        for(int i=0;i<n;i++){
            cin>>space[i];
        }
        cout<<blankSpace(n,space)<<endl;
    }
    return 0;
}