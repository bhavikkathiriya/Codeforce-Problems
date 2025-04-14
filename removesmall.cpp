#include<bits/stdc++.h>
using namespace std;

string removeSmallest(vector<int>small){

    sort(small.begin(),small.end());
    for(int i=0;i<small.size()-1;i++){
        if(small[i+1]-small[i]>1){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    int len;
    cin>>t;
    while(t--){
        cin>>len;
        vector<int>small(len);
        for(int i=0;i<len;i++){
            cin>>small[i];
        }
        cout<<removeSmallest(small)<<endl;
    }
    return 0;
}