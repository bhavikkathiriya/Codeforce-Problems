#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,even_sum=0,odd_sum=0;
        cin>>a;
        vector<int>arr;
        if((a/2)%2!=0){
            cout<<"NO"<<endl;
        } else {
            for(int i=2;i<=a;i+=2){
                arr.push_back(i);
                even_sum+=(i);
            }
            for(int i=1;i<a-1;i+=2){
                arr.push_back(i);
                odd_sum+=i;
            }
            arr.push_back(even_sum-odd_sum);
            cout<<"YES"<<endl;
            for(int i=0;i<a;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}