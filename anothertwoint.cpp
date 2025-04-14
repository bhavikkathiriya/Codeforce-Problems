#include<bits/stdc++.h>
using namespace std;

int anotherTwoInt(int a,int b){
    if (a==b){
        return 0;
    }
    int move=(abs(a-b))/10;
    int rem=(abs(a-b))%10;
    if (rem>0){
        move++;
    }
    return move;
}
int main(){
    int a,b,n;
    cin>>n;
    while(n--){
        cin>>a>>b;
        cout<<anotherTwoInt(a,b)<<endl;
    }
    return 0;
}