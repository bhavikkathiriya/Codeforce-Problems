#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sereja=0,dima=0,count=0;
    cin>>n;
    vector<int>sedi(n);
    for(int i=0;i<n;i++){
        cin>>sedi[i];
    }
    int i=0;
    int j=n-1;
        while(i<=j){
            if(count%2==0){
                if(sedi[i]>sedi[j]){
                    sereja+=sedi[i];
                    i++;
                    count++;
                }
                else{
                    sereja+=sedi[j];
                    j--;
                    count++;
                }
            }
            else{
                if(sedi[i]>sedi[j]){
                    dima+=sedi[i];
                    i++;
                    count++;
                }
                else{
                    dima+=sedi[j];
                    j--;
                    count++;
                }
            }
        }
    cout<<sereja<<" "<<dima;
    return 0;
}
