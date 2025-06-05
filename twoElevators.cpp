#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b,int c){
    int first=(a-1);
    int second=abs(c-b)+(c-1);
    if(first<second){
        return 1;
    } else if(first>second){
        return 2;
    } else {
        return 3;
    }
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