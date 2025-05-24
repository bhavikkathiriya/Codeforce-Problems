#include<bits/stdc++.h>
using namespace std;

int minutesBeforeTheYear(int h,int m){
    int hMin=(23-h)*60;
    int mMin=(60-m);
    return hMin+mMin;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int h,m;
        cin>>h>>m;
        cout<<minutesBeforeTheYear(h,m)<<endl;
    }
    return 0;
}