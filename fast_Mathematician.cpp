#include<bits/stdc++.h>
using namespace std;

string fastMathematician(string n1,string n2){
    string res="";
    for(int i1=0,i2=0;i1<n1.length(),i2<n2.length();i1++,i2++){
        if(n1[i1]==n2[i2]){
            res+="0";
        }
        else{
            res+="1";
        }
    }
    return res;
}

int main(){
    string n1;
    string n2;
    cin>>n1>>n2;
    cout<<fastMathematician(n1,n2)<<endl;
    return 0;
}