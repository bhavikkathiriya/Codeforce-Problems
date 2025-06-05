#include<bits/stdc++.h>
using namespace std;

string solution(int w,int h,int n){
    int count=1;
    if(n==1) return "YES";
    while((w!=1 || h!=1)&& (w%2==0 || h%2==0)){
        if(w%2==0){
            w/=2;
            count*=2;
        } else if(h%2==0){
            h/=2;
            count*=2;
        }
    }
    if(count>=n) return "YES";
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        cout<<solution(w,h,n)<<'\n';
    }
    return 0;
}