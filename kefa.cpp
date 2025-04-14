#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1;
    cin>>n;
    vector<int>kefa(n);
    for(int i=0;i<n;i++){
        cin>>kefa[i];
    }
    int mx=1;
    for(int i=1;i<n;i++){
        if(kefa[i]>=kefa[i-1]){
            count++;
        }
        else{
            count=1;
        }
        mx=max(mx,count);
    }
    cout<<mx<<endl;
    return 0;
}