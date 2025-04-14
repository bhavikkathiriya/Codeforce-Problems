#include<bits/stdc++.h>
using namespace std;

int prime(int n);

int panoramix(int n){
    for(int i=n+1;i<=50;i++){
        if(prime(i)==1){
            return i;
        }
    }
}

int prime(int n){
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1) return 1;
    else return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    if(panoramix(n)==m){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
