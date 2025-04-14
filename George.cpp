#include<iostream>
using namespace std;

int main(){
    int n,p,q;
    int count=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&p,&q);
        if(p+2<=q) count++;
    }
    printf("%d",count);
    return 0;
}