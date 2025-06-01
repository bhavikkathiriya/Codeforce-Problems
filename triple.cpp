#include<bits/stdc++.h>
using namespace std;

int solution(int n,vector<int>& sol){
    int count=0;
    sort(sol.begin(),sol.end());
    if(n<3){
        return -1;
    } else {
        for(int i=2;i<n;i++){
            if(sol[i-2]==sol[i-1] && sol[i-1]==sol[i]){
                count=sol[i];
                break;
            }
        }
        if(count>0) return count;
        else return -1;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>triple(n);
        for(auto& i:triple){
            cin>>i;
        }
        cout<<solution(n,triple)<<"\n";
    }
    return 0;
}