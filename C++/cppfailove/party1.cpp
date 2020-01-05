#include<iostream>
using namespace std;
int main()
{
    int hn,mn,hk,mk,pesni;
    cin>>hn>>mn>>hk>>mk;
    mn=hn*60+mn;
    mk=hk*60+mk;
    pesni=(mk-mn)/5;
    cout<<pesni;
}
