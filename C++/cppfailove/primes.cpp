#include<iostream>
using namespace std;
int main()
{
    unsigned long long a1=1,b1=1,c1=1,a2=1,b2=1,c2=1,max1,max2, min_max=0;
    //cin>>a1>>b1>>c1>>a2>>b2>>c2;
    max1=a1;
    if(max1<b1)max1=b1;
    if(max1<c1)max1=c1;
    max2=a2;
    if(max2<b2)max2=b2;
    if(max2<c2)max2=c2;
    //cout<<max1<<"     "<<max2<<"   ";
    //id()
    if(max2>max1)min_max=max2-max1;
    else min_max=max1-max2;
    //cout<<max1<<"   ";
    cout<<(a1+b1+c1)+(a2+b2+c2)+min_max-(max1+max2);
}
