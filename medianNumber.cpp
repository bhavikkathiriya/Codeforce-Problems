#include<bits/stdc++.h>
using namespace std;

int medianNumber(int a , int b, int c){
    return a+b+c-(max({a,b,c})+min({a,b,c}));
}
int main(){
    int a,b,c,n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<medianNumber(a,b,c)<<endl;
    }
    return 0;
}