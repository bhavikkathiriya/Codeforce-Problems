#include<bits/stdc++.h>
using namespace std;

void solution(int n){
    if(n%2!=0) cout<<-1;
    else{
        for(int i=n;i>=1;i--) cout<<i<<' '; 
    }
}

int main(){
    int n;
    cin>>n;
    solution(n);
    return 0;
}
