#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b,int c){
    int mnA=abs(b-a)+abs(a-c);
    int mnB=abs(a-b)+abs(c-b);
    int mnC=abs(a-c)+abs(b-c);
    return min({mnA,mnB,mnC});
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