#include<iostream>
using namespace std;
int main()
{
    int h,d,x,y,red1,ko1,red2,ko2,dzob,brdz,k;
    cin>>h>>d>>x>>y;
    red1=h/y;
    ko1=d/x;
    dzob=red1*ko1;
    red2=h/x;
    ko2=d/y;
    brdz=red2*ko2;
    if(brdz>dzob)
    {
        k=(h*d)-x*y*brdz;
        cout<<brdz<<endl<<k;
    }

    else
    {
        k=(h*d)-x*y*dzob;
        cout<<dzob<<endl<<k;
    }
}
