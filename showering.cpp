#include<bits/stdc++.h>
using namespace std;

string solution(int n,int s,int m,int arr[][2]){
    if(arr[0][0]>=s) return "YES";
    int last=arr[0][1];
    for(int i=1;i<n;i++){
        if(arr[i][0]-last>=s) return "YES";
        else last=arr[i][1];
    }
    if(m-last>=s) return "YES";
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        cout<<solution(n,s,m,arr)<<'\n';
    }
    return 0;
}