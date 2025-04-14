#include<bits/stdc++.h>
using namespace std;

int policeRecruits(int n,vector<int>& police){
    int policeAva=0;
    int crimeHap=0;
    for(int i=0;i<n;i++){
        if(police[i]>0){
            policeAva+=police[i];
        } else {
            if(policeAva>0){
                policeAva--;
            } else {
                crimeHap++;
            }
        }
    }
    return crimeHap;
}
int main(){
    int n;
    cin>>n;
    vector<int>police(n);
    for(int i=0;i<n;i++){
        cin>>police[i];
    }
    cout<<policeRecruits(n,police)<<endl;
    return 0;
}