#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b){
    int s=max(2*min(a,b),max(a,b));
    return s*s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solution(a,b)<<endl;
    }
    return 0;
}