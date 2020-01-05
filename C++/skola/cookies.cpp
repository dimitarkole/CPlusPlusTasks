#include<iostream>
using namespace std;
int main()
{
    int n,k,valk;
    cin>>n>>k;
    valk=n/2;
    if(k<valk)cout<<n-k;
    else cout<<n-valk;
}
