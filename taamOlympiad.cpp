#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int num;
    cin>>n;
    vector<int>player(n);
    vector<int>programmer,maths,pe;
    for(int i=0;i<n;i++){
        cin>>player[i];
        if(player[i]==1) programmer.push_back(i+1);
        else if(player[i]==2) maths.push_back(i+1);
        else pe.push_back(i+1);
    }
    num=min({programmer.size(),maths.size(),pe.size()});
    cout<<num<<endl;
    for(int i=0;i<num;i++){
        cout<<programmer[i]<<" "<<maths[i]<<" "<<pe[i]<<endl;
    }
    
    return 0;
}