#include<iostream>
using namespace std;
int main()
{
    int k,e,d,s,c1,c2,c3,e2,d2,sum=0;
    cin>>k;
    e=k%10;
    d=k/10%10;
    s=k/100%10;
    c1=s+d;
    if(c1>9)
    {
       e2=c1%10;
       d2=c1/10%10;
       c1=e2+d2;
    }
    if(e%2==0)sum=e+e;
    else sum=e+d;
    e=sum%10;
    d=sum/10%10;
    sum=c1*100+d*10+e;
    cout<<sum;
}
