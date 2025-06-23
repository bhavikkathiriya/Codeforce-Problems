#include<bits/stdc++.h>
using namespace std;

void solution(){
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int dog=(x>a?(c=c-(x-a)):0);
    int cat=(y>b?(c=c-(y-b)):0);
    cout<<(c>=0?"Yes":"No")<<'\n';
}

int main(){
    int t;
    cin>>t;
    while(t--) solution();
    return 0;
}