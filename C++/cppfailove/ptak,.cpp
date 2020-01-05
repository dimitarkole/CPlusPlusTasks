#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,p,min;
    cin>>a>>b>>c>>d;
    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    if(min>d)min=d;
    p=(a+b+c+d)-(min-1);
    cout<<p;
}
