#include<bits/stdc++.h>
using namespace std;

int interestingDrink(const vector<int>& x,int mI){
    int count=upper_bound(x.begin(),x.end(),mI)-x.begin();
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    int m;
    cin>>m;
    while(m--){
        int mI;
        cin>>mI;
        cout<<interestingDrink(x,mI)<<endl;
    }
    return 0;
}