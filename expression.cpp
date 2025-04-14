#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int m=max({a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c});
    cout<<m<<endl;
    return 0;
}