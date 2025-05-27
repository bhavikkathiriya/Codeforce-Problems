#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int root=sqrt(stoi((s)));
        if(root*root==stoi(s)){
            cout<<root/2<<" "<<root-(root/2)<<"\n";
        } else {
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}