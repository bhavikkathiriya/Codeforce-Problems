#include<bits/stdc++.h>
using namespace std;

string createWord(string a,string b){
    swap(a[0],b[0]);
    string s=a+" "+b;
    return s;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        cout<<createWord(a,b)<<endl;
    }
    return 0;
}