#include<bits/stdc++.h>
using namespace std;

int fashioinArray(int n,vector<int>& f){
    int count=0;
    sort(f.begin(),f.end());
    int max_len = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if ((f[i] + f[j]) % 2 == 0) {
                max_len = max(max_len, j - i + 1);
            }
        }
    }
    return n - max_len;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>f(n);
        for(int i=0;i<n;i++){
            cin>>f[i];
        }
        cout<<fashioinArray(n,f)<<endl;
    }
    return 0;
}