#include<bits/stdc++.h>
using namespace std;

int fizzBuzz(long long n){
    long long count=0;
    for(int i=0;i<=2;i++){
        long long log=(n-i)/15;
        if(n>=i) {
            count+=(log+1);
        }
    }
    return count;
}
int main(){
    long long num;
    cin>>num;
    while(num--){
        int fizz;
        cin>>fizz;
        cout<<fizzBuzz(fizz)<<endl;
    }
    return 0;
}