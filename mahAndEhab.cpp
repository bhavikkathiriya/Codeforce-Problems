#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    return n%2==0;
}
int main(){
    int n;
    cin>>n;
    if(solution(n)==1) cout<<"Mahmoud";
    else cout<<"Ehab";
    return 0;
}