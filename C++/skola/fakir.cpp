#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,min=500;
    cin>>a>>b>>c>>d;
    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    if(min>d)min=d;
    cout<<(a+b+c+d+1)-min;
}
