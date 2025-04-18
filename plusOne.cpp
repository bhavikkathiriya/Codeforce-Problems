#include<bits/stdc++.h>
using namespace std;

int plusOneOnTheSubset(int n,vector<int>& plusOne){
    int max=*max_element(plusOne.begin(),plusOne.end());
    int min=*min_element(plusOne.begin(),plusOne.end());
    return max-min;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>plusOne(n);
        for(int i=0;i<n;i++){
            cin>>plusOne[i];
        }
        cout<<plusOneOnTheSubset(n,plusOne)<<endl;
    }
    return 0;
}