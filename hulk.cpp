#include<bits/stdc++.h>
using namespace std;

string hulk(int n){
    string res="";
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            res+="I hate ";
        }
        else{
            res+="I love ";
        }
        if(i==n){
            res+="it";
        }
        else{
            res+="that ";
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<hulk(n)<<endl;
    return 0;
}