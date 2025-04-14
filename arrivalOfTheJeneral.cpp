#include<bits/stdc++.h>
using namespace std;

int arrivalOfTheJeneral(vector<int>& jeneral,int n){
    int second=0;
    int tallsest=jeneral[0],tall_idx=0;
    int shortest=jeneral[0],srt_idx=0;
    for(int i=0;i<n;i++){
        if(jeneral[i]>tallsest){
            tallsest=jeneral[i];
            tall_idx=i;
        }
        if(jeneral[i]<=shortest){
            shortest=jeneral[i];
            srt_idx=i;
        }
    }
    second=tall_idx+(n-1-srt_idx);
    if(tall_idx>srt_idx){
        second--;
    }
    return second;
}
int main(){
    int n;
    cin>>n;
    vector<int>jeneral(n);
    for(int i=0;i<n;i++){
        cin>>jeneral[i];
    }
    cout<<arrivalOfTheJeneral(jeneral,n)<<endl;
    return 0;
}