#include<iostream>
using namespace std;
int main()
{
    int a,b,e1,d1,s1,e,d,s,s2,d2,e2,E,D,S,i;
    cin>>a>>b;
    e=a%10;
    d=a/10%10;
    s=a/100%10;
    e1=b%10;
    d1=b/10%10;
    s1=b/100%10;
    s2=s+e1;
    if(s2>10)
    {
    e=s2%10;
    d=s2/10%10;
    s2=e+d;
    }
    d2=d+d1;
    if(d2>10)
    {
    d=d2%10;
    d1=d2/10%10;
    }
    e2=s+e1;
    if(e2>10)
    {
    e=e2%10;
    s=e2/10%10;
    }
    i=s2*100+d2*10+e2;
    cout<<i;
}
