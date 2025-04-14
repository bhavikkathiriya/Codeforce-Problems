#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int games[n],guest[n];

    for(int i=0;i<n;i++){
        cin>>games[i]>>guest[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && games[i]==guest[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}