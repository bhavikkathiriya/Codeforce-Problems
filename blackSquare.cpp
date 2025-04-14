#include<bits/stdc++.h>
using namespace std;

int blackSquares(vector<int>blackSquare,string s){
    int cal=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') {
            cal+=blackSquare[0];
        } else if (s[i]=='2'){
            cal+=blackSquare[1];
        } else if(s[i]=='3'){
            cal+=blackSquare[2];
        } else {
            cal+=blackSquare[3];
        }
    }
    return cal;
}
int main(){
    vector<int>blackSquare(4);
    for(int i=0;i<4;i++){
        cin>>blackSquare[i];
    }
    string s;
    cin>>s;
    cout<<blackSquares(blackSquare,s)<<endl;
    return 0;
}