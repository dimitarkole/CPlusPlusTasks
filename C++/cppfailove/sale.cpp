#include<iostream>
using namespace std;
int main()
{
    int n,k,a,b,brpn,brostn,brpk,brostk;
    cin>>n>>k>>a>>b;
    brpn=a/(n*b);
    brostn=(a%(n*b))/b;
    brpk=a/((k-1)*b);
    brostk=(a%((k-1)*b))/b;
    if(brpn*(n+1)+brostn>brpk*k+brostk)cout<<brpn*(n+1)+brostn;
    else cout<<brpk*k+brostk;
}
