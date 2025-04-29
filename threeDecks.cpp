#include<bits/stdc++.h>
using namespace std;

string threeDecks(int a,int b,int c){
    int sum=a+b+c;
    int a_remain=abs((sum/3-a))+a;
    int b_remain=abs((sum/3-b))+b;
    int c_remain=c-(a_remain-a+b_remain-b);
    if(sum%3==0 && a_remain==b_remain && b_remain==c_remain){
        return "YES";
    } else {
        return "NO";
    }
}
int main(){
    int a,b,c,n;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        cout<<threeDecks(a,b,c)<<endl;
    }
    return 0;
}