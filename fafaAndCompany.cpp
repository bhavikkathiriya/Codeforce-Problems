#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int count=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) count++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<solution(n);
    return 0;
}