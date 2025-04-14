#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        int f=0;
        for(int i=1;i<s.length();i++){
            if(s[i-1]==s[i]){
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<"1"<<endl;
        }
        else{
            cout<<s.length()<<endl;
        }
    }
    return 0;
}