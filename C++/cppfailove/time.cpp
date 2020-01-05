#include<iostream>
using namespace std;
int main()
{
    int  hn1,mn1,hk1,mk1,hn2,mn2,hk2,mk2,hn3,mn3,hk3,mk3,min,max,mmax,hmax,mmin,hmin,m1,m2,m3;
    cin>>hn1>>mn1>>hk1>>mk1>>hn2>>mn2>>hk2>>mk2>>hn3>>mn3>>hk3>>mk3;
    mn1=hn1*60+mn1;
    mk1=hk1*60+mk1;
    mn2=hn2*60+mn2;
    mk2=hk2*60+mk2;
    mn3=hn3*60+mn3;
    mk3=hk3*60+mk3;
    if(mk1<mn1)mk1=mk1+24*60;
    if(mk2<mn2)mk2=mk2+24*60;
    if(mk3<mn3)mk3=mk3+24*60;
    m1=mk1-mn1;
    m2=mk2-mn2;
    m3=mk3-mn3;
    min=m1;
    if(min>m2)min=m2;
    if(min>m3)min=m3;
    max=m1;
    if(max<m2)max=m2;
    if(max<m3)max=m3;
    mmax=max%60;
    hmax=max/60;
    mmin=min%60;
    hmin=min/60;
    cout<<hmin<<':';
    if (mmin<10) cout<<"0";
    cout<<mmin<<endl<<hmax<<':';
    if(mmax<10)cout<<"0";
    cout<<mmax<<endl;

}
