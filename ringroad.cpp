#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec(m);
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    long long count=vec[0]-1;
    for(int i=1;i<vec.size();i++){
        if(vec[i]>=vec[i-1]){
            count+=vec[i]-vec[i-1];
        }
        else{
            count+=(n-vec[i-1])+vec[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
