#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(n/(m-k)==0)cout<<n/(k-m);
    else cout<<n/(k-m)+1;
}
