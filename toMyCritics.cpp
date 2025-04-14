#include<bits/stdc++.h>
using namespace std;

string toMyCritics(int a,int b,int c){
    if(a+b>=10 || b+c>=10 || a+c>=10){
        return "YES";
    }
    return "NO";
}

int main(){
    int a,b,c,n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<toMyCritics(a,b,c)<<endl;
    }
    return 0;
}