#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,min,max;
    cin>>a>>b>>c;
    min=a;
    if(min>b)min=b;
    if(min>c)min=c;
    max=a;
    if(max<b)max=b;
    if(max<c)max=c;
    cout<<a+b+c-(max+min);
}
