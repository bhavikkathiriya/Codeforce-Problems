#include<bits/stdc++.h>
using namespace std;

int stonesOnTheTable(string s,int n){
    int diffMatch=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            diffMatch++;
        }
    }
    return diffMatch;
}
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    cout<<stonesOnTheTable(s,n)<<endl;
    return 0;
}