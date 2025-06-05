#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b){
    if(a<b){
        if(a%2==b%2){
            return 2;
        } else {
            return 1;
        }
    } else if(a>b){
        if(a%2==b%2){
            return 1;
        } else {
            return 2;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solution(a,b)<<'\n';
    }
    return 0;
}