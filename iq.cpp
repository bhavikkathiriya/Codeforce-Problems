#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>iq(n);
    vector<int>odd,even;
    for(int i=0;i<n;i++){
        cin>>iq[i];
        if(iq[i]%2==0){
            even.push_back(i+1);
        }
        else{
            odd.push_back(i+1);
        }
    }
    if(even.size()==1){
        cout<<even[0];
    }
    else{
        cout<<odd[0];
    }
    return 0;
}