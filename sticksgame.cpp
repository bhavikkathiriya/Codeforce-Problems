#include<bits/stdc++.h>
using namespace std;

string gameWithSticks(int n,int m){
    int minDiff=min(m,n);
    if (minDiff%2==0){
        return "Malvika";
    }
    return "Akshat";
}
int main(){
    int m,n;
    cin>>n>>m;
    cout<<gameWithSticks(n,m);
    return 0;
}