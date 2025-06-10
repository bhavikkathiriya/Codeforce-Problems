#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b,int n){
    int count=0;
    while(a<=n && b<=n){
        if(a>b) {
            b+=a;
            count++;
        }else{
            a+=b;
            count++;
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        cout<<solution(a,b,n)<<'\n';
    }
    return 0;
}