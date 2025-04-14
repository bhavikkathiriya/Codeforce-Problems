#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n;
    while(n--){
        cin>>k;
        sum+=k;
    }
    if(sum==0){
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
    return 0;
}