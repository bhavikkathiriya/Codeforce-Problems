#include<bits/stdc++.h>
using namespace std;

int solution(int m,int a,int b,int c){
    int count=0;
    count=min(a,m)+min(b,m);
    count+=min(2*m-count,c);
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        cout<<solution(m,a,b,c)<<'\n';
    }
    return 0;
}