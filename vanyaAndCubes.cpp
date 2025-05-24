#include<bits/stdc++.h>
using namespace std;

int vanyaAndCubes(int n){
    int level=1;
    int cube=0,sum=0;
    if (n==1) return 1;
    
    while(true){
        sum+=(level*(level+1))/2;
        if(sum<=n){
            cube++;
            level++;
        } else {
            break;
        }
    }
    return cube;
}
int main(){
    int n;
    cin>>n;
    cout<<vanyaAndCubes(n)<<endl;
    return 0;
}
