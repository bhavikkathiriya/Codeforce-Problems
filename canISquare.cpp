#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

string solution(int n,vector<int>& sol){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum+=sol[i];
    }
    ll root = (ll)round(sqrt((long double)sum));
    if(root*root==sum) return "YES";
    else return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>canI(n);
        for(auto& x:canI){
            cin>>x;
        }
        cout<<solution(n,canI)<<'\n';
    }
    return 0;
}