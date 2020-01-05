#include<iostream>
using namespace std;
int main()
{
    long long  a,b,c,d,e,f,min,max,sum=0;
    cin>>a>>b>>c>>d>>e>>f;
    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    if(min>d)min=d;
    if(min>e)min=e;
    if(min>f)min=f;
    if(min>d)min=d;
    max=a;
    if(max<b)max=b;
    if(max<c)max=c;
    if(max<d)max=d;
    if(max<e)max=e;
    if(max<f)max=f;
    if(max<d)max=d;
    sum=(a+b+c+d+e+f-(min+max))/4;
    cout<<sum;

}
