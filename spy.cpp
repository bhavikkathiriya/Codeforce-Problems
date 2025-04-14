#include<bits/stdc++.h>
using namespace std;

int spyDetect(const vector<int>& spy,int n){
    if(spy[0]!=spy[1] && spy[1]==spy[2]) return 1;
    for(int i=1;i<n;i++){
        if(spy[i]!=spy[i-1]){
            return i+1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>spy(n);
        for(int i=0;i<n;i++){
            cin>>spy[i];
        }
    cout<<spyDetect(spy,n)<<endl;
    }
    return 0;
}

