#include<bits/stdc++.h>
using namespace std;

int magnets(vector<int>& mag,int n){
    int total=1;
    for(int i=0;i<n-1;i++){
        if(mag[i]!=mag[i+1]){
            total++;
        }
    }
    return total;
}
int main(){
    int n;
    cin>>n;
    vector<int>mag(n);
    for(int i=0;i<n;i++){
        cin>>mag[i];
    }
    cout<<magnets(mag,n)<<endl;
    return 0;
}