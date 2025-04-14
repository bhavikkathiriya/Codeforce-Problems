#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,x,y,found=0;
    cin>>s>>n;
    vector<pair<int,int>>drag(n);
    for(int i=0;i<n;i++){
        cin>>drag[i].first>>drag[i].second;
    }
    sort(drag.begin(),drag.end());
    for(int i=0;i<n;i++){
        if(s>drag[i].first){
            s+=drag[i].second;
        }
        else{
            found=1;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(found==0){
        cout<<"YES"<<endl;
    }
    return 0;
}