#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mishaka,chris,m1=0,m2=0;
    for(int i=0;i<n;i++){
        cin>>mishaka>>chris;
        if(mishaka>chris) m1++;
        else if(mishaka<chris) m2++;
    }
    if(m1>m2){
        cout<<"Mishka"<<endl;
    } else if(m1<m2){
        cout<<"Chris"<<endl;
    } else {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}