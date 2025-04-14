#include<bits/stdc++.h>
using namespace std;

string wannaBeTheGuy(int n,vector<int>& lev1,vector<int>& lev2){
    set<int>uniqueSet(lev1.begin(),lev1.end());
    uniqueSet.insert(lev2.begin(),lev2.end());
    if (uniqueSet.size()==n){
        return "I become the guy.";
    }
    return "Oh, my keyboard!";
}
int main(){
    int n;
    cin>>n;
    int p,q;
    cin>>p;
    vector<int>lev1(p);
    for(int i=0;i<p;i++){
        cin>>lev1[i];
    }
    cin>>q;
    vector<int>lev2(q);
    for(int i=0;i<q;i++){
        cin>>lev2[i];
    }
    cout<<wannaBeTheGuy(n,lev1,lev2)<<endl;
    return 0;
}
