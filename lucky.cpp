#include<bits/stdc++.h>
using namespace std;

string luckyOrNot(string s){
    if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5]){
        return "YES";
    }
    return "NO";
}
int main(){
    string luck;
    int n;
    cin>>n;
    while(n--){
        cin>>luck;
        cout<<(luckyOrNot(luck))<<endl;
    }
    return 0;
}