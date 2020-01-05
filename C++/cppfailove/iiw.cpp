#include<iostream>
using namespace std;
int main()
{
    int a,e,d,s,c,c2,c3,max=0;
    cin>>a;
    e=a%10;
    d=a/10%10;
    s=a/100;
    c=s*10+d;
    c2=s*10+e;
    c3=d*10+e;
    max=c;
    if(max<c2)max=c2;
    if(max<c3)max=c3;
    cout<<max;
}
