#include<bits/stdc++.h>
using namespace std;

int solution(string s){
    int sum=0,cP=97;
    for(int i=0;i<s.length();i++){
        if(abs((abs(cP-int(s[i])))-26)<=abs(int(s[i])-cP)){
            sum+=abs(abs(cP-int(s[i]))-26);
        } else {
            sum+=abs(cP-int(s[i]));
        }
        cP=int(s[i]);
    }
    return sum;
}

int main(){
    string s;
    cin>>s;
    cout<<solution(s)<<"\n";
    return 0;
}