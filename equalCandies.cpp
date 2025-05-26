#include<bits/stdc++.h>
using namespace std;

int solution(int n,vector<int>& sol){
    int min=*min_element(sol.begin(),sol.end());
    int sum=0;
    for(auto &ele:sol){
        sum+=(ele-min);
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>candies(n);
        for(auto& ele:candies){
            cin>>ele;
        }
        cout<<solution(n,candies)<<endl;
    }
    return 0;
}
