#include<bits/stdc++.h>
using namespace std;

int oddOneOut(int a,int b,int c){
    if(a==b && a!=c) return c;
    else if(a==c && a!=b) return b;
    else return a;
}
int main(){
    int a,b,c,n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<oddOneOut(a,b,c)<<endl;
    }
    return 0;
}