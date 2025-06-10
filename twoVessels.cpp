#include<bits/stdc++.h>
using namespace std;

int solution(int a,int b,int c){
    int count=0;
    while(true){
        if(a>b){
            a-=c;
            b+=c;
            count++;
            if(b>a){
                return count;
            }
        }else if(a==b){
            return count;
        }else{
            b-=c;
            a+=c;
            count++;
            if(a>b){
                return count;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<solution(a,b,c)<<"\n";
    }
    return 0;
}