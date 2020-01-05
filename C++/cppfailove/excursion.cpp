#include<iostream>
using namespace std;
int main()
{
    int w,h,n,a,b;
    cin>>w>>h;
    cin>>n;
    for(int i=1;i<=n;i++)
{
    cin>>a>>b;
    if(w>a ||h>b)cout<<i;break;
}
    if(i>n)cout<<"No crash";
    return 0;
}
