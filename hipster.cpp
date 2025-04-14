#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int fs=min(a,b);
    float rs=(max(a,b)-min(a,b))/2;
    if(rs!=0){
        cout<<fs<<" "<<rs;
    }
    else{
        cout<<fs<<" "<<"0";
    }
    return 0;
}