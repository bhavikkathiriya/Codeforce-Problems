#include<bits/stdc++.h>
using namespace std;

string solution(vector<int>& sol){
    int f=max(sol[0],sol[1]);
    int s=max(sol[2],sol[3]);
    sort(sol.begin(),sol.end());
    if(f+s==sol[3]+sol[2]){
        return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>fair(4);
        for(auto& ele:fair){
            cin>>ele;
        }
        cout<<solution(fair)<<endl;
    }
    return 0;
}