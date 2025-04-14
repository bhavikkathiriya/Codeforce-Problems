#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    vector<int>user(n);
    for(int i=0;i<n;i++){
        cin>>user[i];
    }
    int bS=user[0],wS=user[0];
    for(int i=1;i<n;i++){
        if(user[i]>bS){
            count++;
            bS=user[i];
        }
        else if(user[i]<wS){
            count++;
            wS=user[i];
        }
    }
    cout<<count<<endl;
    return 0;
}