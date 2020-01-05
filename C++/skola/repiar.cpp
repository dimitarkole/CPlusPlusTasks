#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long l,w,h;
    float brkofboq;
    //cin>>l>>w>>h;
    l=1000000;
    w=100;
    h=2;
    brkofboq=(((l*h)+(w*h))*2)/16.;
    cout<<ceil(brkofboq);
}
