#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        int rem=a%b;
        if(rem!=0){
        cout<<-(rem-b)<<endl;
        }
        else{
            cout<<rem<<endl;
        }
    }
    return 0;
}