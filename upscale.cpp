#include<bits/stdc++.h>
using namespace std;

void solution(int n){
    for(int i=0;i<n;i++){
        string res="";
        for(int j=0;j<n;j++){
            if((i+j)%2==0){
                res+="##";
            } else{
                res+="..";
            }
        }
        cout<<res<<'\n';
        cout<<res<<'\n';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solution(n);
    }
    return 0;
}