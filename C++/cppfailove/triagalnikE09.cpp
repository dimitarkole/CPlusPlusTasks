#include<iostream>
using namespace std;
int main()
{
    long long a1,b1,c1,a2,b2,c2,max1,max2,min12,ob=0;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    max1=a1;
    if(max1<b1)max1=b1;
    if(max1<c1)max1=c1;
    max2=a2;
    if(max2<b2)max2=b2;
    if(max2<c2)max2=c2;
    if(max1<max2)min12=max1;
    else min12=max2;
    ob=(a1+b1+c1+a2+b2+c2)-(min12*2);
    cout<<ob;
}
