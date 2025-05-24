#include<bits/stdc++.h>
using namespace std;

int preAndApp(int n,string s){
    int st=0;
    int end=s.length()-1;
    while(st<=end){
        if(s[st]==s[end]){
            return end-st+1;
        }
        st++;
        end--;
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<preAndApp(n,s)<<endl;
    }
    return 0;
}
