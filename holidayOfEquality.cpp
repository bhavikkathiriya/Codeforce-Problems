#include<bits/stdc++.h>
using namespace std;

int holidayOfEquality(vector<int>& money,int n){
    int mx=*max_element(money.begin(),money.end());
    int total=0;
    for(int i=0;i<n;i++){
        total+=(mx-money[i]);
    }
    return total;
}
int main(){
    int n;
    cin>>n;
    vector<int>money(n);
    for(int i=0;i<n;i++){
        cin>>money[i];
    }
    cout<<holidayOfEquality(money,n)<<endl;
    return 0;
}