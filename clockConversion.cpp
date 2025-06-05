#include<bits/stdc++.h>
using namespace std;

string solution(string s){
    string resH="",resM="",res="";
    resH+=s[0],resM+=s[3];
    resH+=s[1],resM+=s[4];

    int hour=stoi(resH);
    int min=stoi(resM);

    if(hour>=1 && hour<12){
        res+=(resH+":"+resM+" AM");
    } else if(hour>12){
        if(hour>=13 && hour<=21){
            hour-=12;
            res+=("0"+to_string(hour)+":"+resM+" PM");
        } else{
            hour-=12;
            res+=(to_string(hour)+":"+resM+" PM");
        }
    }
    else if(hour==12){
        res+=(resH+":"+resM+" PM");
    } else if(hour==0){
        hour+=12;
        res+=(to_string(hour)+":"+resM+" AM");
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solution(s)<<'\n';
    }
    return 0;
}