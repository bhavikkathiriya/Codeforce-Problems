#include<bits/stdc++.h>
using namespace std;

int solution(int n,vector<int>& sol){
    int c=1,mx=1;
    for(int i=0;i<n-1;i++){
        if(sol[i]<sol[i+1]){
            c++;
        } else {
            c=1;
        }
        mx=max(mx,c);
    }
    return mx;
}

int main(){
    int n;
    cin>>n;
    vector<int>sol(n);
    for(auto& e:sol){
        cin>>e;
    }
    cout<<solution(n,sol);
    return 0;
}
