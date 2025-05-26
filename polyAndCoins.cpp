#include<bits/stdc++.h>
using namespace std;

void polyAndCoins(long long n){
    long long c1,c2;
    if(n%3==0){
        c1=n/3;
        c2=n/3;
    } else if(n%3==1){
        c1=n/3+1;
        c2=n/3;
    } else{
        c1=n/3;
        c2=n/3+1;
    }
    cout<<c1<<" "<<c2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        polyAndCoins(n);
    }
    return 0;
}