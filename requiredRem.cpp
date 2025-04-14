#include<bits/stdc++.h>
using namespace std;

int reqRem(long long x,long long y ,long long n){
    return ((n-y)/x)*x+y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        cout<<reqRem(x,y,n)<<endl;
    }
    return 0;
}