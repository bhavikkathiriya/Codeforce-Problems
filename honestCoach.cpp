#include<bits/stdc++.h>
using namespace std;

int solution(int n,vector<int>& sol){
    int count=0;
    sort(sol.begin(),sol.end());
    int mn=sol[1]-sol[0];
    for(int i=0;i<n-1;i++){
        if(sol[i]==sol[i+1]) {
            count++;
        }
        mn=min(sol[i+1]-sol[i],mn);
    }
    if(count>=1) return 0;
    return mn;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>honestCoach(n);
        for(auto& ele:honestCoach){
            cin>>ele;
        }
        cout<<solution(n,honestCoach)<<endl;
    }
    return 0;
}