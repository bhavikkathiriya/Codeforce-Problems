#include<bits/stdc++.h>
using namespace std;

string fairDivisions(int n,vector<int>& fair){
    int one=0,two=0;
    for(int i=0;i<n;i++){
        if(fair[i]==1) one++;
        else two++;
    }
    int sum=one+(two*2);
    if(sum%2!=0) return "NO";
    if(sum/2%2==1 && one==0) return "NO";
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>fair(n);
        for(int i=0;i<n;i++){
            cin>>fair[i];
        }
        cout<<fairDivisions(n,fair)<<endl;
    }
    return 0;
}
