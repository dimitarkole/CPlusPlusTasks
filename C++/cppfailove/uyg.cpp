#include<iostream>
using namespace std;
int main()
{
    long long a,e,d,s,x,dx,sx,m,dm,sum=0;
    float b;
    cin>>a;
    e=a%10;
    d=a/10%10;
    s=a/100%10;
    x=a/1000%10;
    dx=a/10000%10;
    sx=a/100000%10;
    m=a/1000000%10;
    dm=a/10000000%10;
    sum=e+d+s+x+dx+sx+m+dm;
    b=sum/8.;
    cout<<b;
}
