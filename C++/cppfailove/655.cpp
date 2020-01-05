#include<iostream>
using namespace std;
int main()
{
    int a,b,y,x,osp,d,kd,kso;
    cin>>a>>b>>y>>x;
    osp=a*b;
    d=y*2+x*2;
    kd=osp%d;
    kso=osp/d;
    cout<<kd<<" "<<kso;
}
