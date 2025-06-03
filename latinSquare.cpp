#include<bits/stdc++.h>
using namespace std;

char solution(vector<string>& sol){
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(sol[i][j]=='A') a++;
            else if(sol[i][j]=='B') b++;
            else c++;
        }
    }
    if(a!=3) return 'A';
    else if(b!=3) return 'B';
    else return 'C';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>latin(3);
        for(auto& x:latin) cin>>x;
        cout<<solution(latin)<<'\n';
    }
    return 0;
}