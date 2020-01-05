#include<iostream>
using namespace std;
int main()
{
    int h,m,t,a,c,ph,pm;
    cin>>h>>m>>t;
    a=h*60+m;
    c=a+t;
    pm=c%60;
    ph=c/60;
    ph=ph%24;
    cout<<ph<<"h"<<" "<<pm<<"m";
}
