#include<iostream>
using namespace std;
int main()
{
    int n,k,l,min,max,brs1,brs2;
    cin>>n>>k>>l;
    max=k;
    if(max<l)max=l;
    min=(k+l)-max;
    brs1=max-min;
    brs2=n-brs1;
    if(brs1<brs2)cout<<brs1-1;
    else cout<<brs2-1;
}
