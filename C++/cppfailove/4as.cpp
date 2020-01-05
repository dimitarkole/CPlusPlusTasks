#include<iostream>
using namespace std;
int main()
{
    long h,m,x,xm,xxm,y;
    cin>>h>>m>>x>>xm>>xxm>>y;
    m=h*60+m;
    if(y<=3)
    {
        m=m+y*x+(y-1)*xm;
    }
    else
    {
        m=m+y*x+xxm+(y-2)*xm;
    }
    h=m/60;
    m=m%60;
    cout<<h<<"h. "<<m<<"m. \n";
}
