#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b,int c){
    int mn=min({a,b,c});
    for(int i=0;i<5;i++){
        if(mn==a) {
            ++a;
        } else if(mn==b){
            ++b;
        } else {
            ++c;
        }
        mn=min({a,b,c});
    }
    return a*b*c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solution(a,b,c)<<'\n';
    }
    return 0;
}