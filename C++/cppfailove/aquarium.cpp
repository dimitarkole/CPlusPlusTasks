#include<iostream>
using namespace std;
int main()
{
    int v,n;
    cin>>v>>n;
    n=n*3;
    //cout<<n;
    if(n<=v)cout<<"NO";
    else cout<<"YES "<<(n-v)/3;
}
