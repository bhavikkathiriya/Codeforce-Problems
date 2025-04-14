#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int oc=(n+1)/2;
    if(k<=oc){
        cout<<(2*k)-1;
    }
    else{
        cout<<2*(k-oc);
    }
    return 0;
}