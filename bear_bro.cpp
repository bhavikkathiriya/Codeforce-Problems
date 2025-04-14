#include<iostream>
using namespace std;

int main()
{
    int lim,bro;
    int count=0;
    cin>>lim>>bro;
    while(lim<=bro)
    {
        lim*=3;
        bro*=2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}