#include<bits/stdc++.h>
using namespace std;

string borze(string bor){
    string s="";
    for(int i=0;i<=bor.length()-1;i++){
        if(bor[i]=='.'){
            s+='0';
        }
        else if(bor[i]=='-' && bor[i+1]=='.'){
            s+='1';
            i+=1;
        }
        else{
            s+='2';
            i++;
        }
    }
    return s;
}
int main(){
    string bor;
    cin>>bor;
    cout<<borze(bor);
    return 0;
}
