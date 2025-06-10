#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int sum=0;
    int temp=1;
    while(n/2>=1){
        sum+=pow(2,temp);
        temp++;
        n-=2;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solution(n)<<'\n';
    }
    return 0;
}