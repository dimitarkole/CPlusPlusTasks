#include<iostream>
using namespace std;
int main()
{
    long x,xx,y,yy,l,s,lic;
    cin>>x>>xx>>y>>yy>>l>>s;
    xx=xx+x*10;
    yy=yy+y*10;
    s=s+l*100;
    lic=xx*yy;
    cout<<lic<<endl;
    s=s*lic;
    l=s/100;
    s=s%10;
    cout<<l<<" l. "<<s<<" s. \n";
}
