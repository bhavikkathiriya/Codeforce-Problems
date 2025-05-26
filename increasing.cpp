#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& sol){
    sort(sol.begin(),sol.end());
    for(int i=1;i<n;i++){
        if(sol[i]==sol[i-1]){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>increasing(n);
        for(auto& ele:increasing){
            cin>>ele;
        }
        cout<<solution(n,increasing)<<endl;
    }
    return 0;
}