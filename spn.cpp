#include<bits/stdc++.h>
using namespace std;

string spn(int a,int b,int c){
    if(a<b && b<c) return "STAIR";
    else if(a<b && b>c) return "PEAK";
    else return "NONE";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<spn(a,b,c)<<endl;
    }
    return 0;
}
