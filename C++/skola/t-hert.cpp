#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,max;
    cin>>a>>b>>x>>y;
    a=a/x;
    b=a/y;
    max=a;
    if(max<b)max=b;
    cout<<b<<" "<<a*b-((x*y)*max);
}
