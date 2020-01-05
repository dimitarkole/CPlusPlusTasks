#include<iostream>
using namespace std;
int main()
{
    int a,e,d,s,x,dx,br=0,sum=0;
    cin>>a;
    e=a%10;
    d=a/10%10;
    s=a/100%10;
    x=a/1000%10;
    dx=a/10000%10;
    if(e%2==1)br++;
    if(d%2==1)br++;
    if(s%2==1)br++;
    if(x%2==1)br++;
    if(dx%2==1)br++;
    cout<<br<<endl;
    if(e%2==0)sum=e;
    if(d%2==0)sum=sum+d;
    if(s%2==0)sum=sum+s;
    if(x%2==0)sum=sum+x;
    if(dx%2==0)sum=sum+dx;
    cout<<sum;
}
