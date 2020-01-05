#include<iostream>
using namespace std;
int main()
{
    int m,c,k,s,p,l;
    cin>>m>>c>>k;
    p=(m*100+c)*k;
    s=p%100;
    l=p/100;
    cout<<l<<" "<<s;
}
