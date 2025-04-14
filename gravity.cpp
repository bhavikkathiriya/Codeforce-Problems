#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>grav(n);
    for(int i=0;i<n;i++){
        cin>>grav[i];
    }
    sort(grav.begin(),grav.end());
    for(int i=0;i<n;i++){
        cout<<grav[i]<<" ";
        }
    return 0;
}