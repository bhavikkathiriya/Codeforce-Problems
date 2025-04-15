#include<bits/stdc++.h>
using namespace std;

int evenArray(int n,vector<int>& even){
    int evens=0,odd=0;
    for(int i=0;i<n;i++){
        if(i%2==0 && even[i]%2!=0) evens++;
        else if(i%2!=0 && even[i]%2==0) odd++;
    }
    if(odd!=evens) return -1;
    else return odd;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>even(n);
        for(int i=0;i<n;i++){
            cin>>even[i];
        }
        cout<<evenArray(n,even)<<endl;
    }
    return 0;
}