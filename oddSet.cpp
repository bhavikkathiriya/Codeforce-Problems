#include<bits/stdc++.h>
using namespace std;

string solution(int n,vector<int>& sol){
    int even=0,odd=0;
    for(int i=0;i<2*n;i++){
        if(sol[i]%2==0) even++;
        else odd++;
    }
    if(even==odd) return "YES";
    else return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>set(n);
        for(int i=0;i<2*n;i++){
            cin>>set[i];
        }
        cout<<solution(n,set)<<'\n';
    }
    return 0;
}