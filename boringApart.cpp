#include<bits/stdc++.h>
using namespace std;

int boringApart(int n){
    int digit=floor((log10(n)))+1;
    int rem=n%10;
    int sum=(rem-1)*10;
    if(digit==1) sum+=1;
    else if(digit==2) sum+=3;
    else if(digit==3) sum+=6;
    else sum+=10;
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<boringApart(n)<<endl;
    }
    return 0;
}