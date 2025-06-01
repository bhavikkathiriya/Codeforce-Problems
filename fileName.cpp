#include<bits/stdc++.h>
using namespace std;

int solution(int n,string s){
    int flag=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            flag++;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solution(n,s)<<endl;
    return 0;
}