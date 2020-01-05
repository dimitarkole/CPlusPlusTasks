#include<iostream>
using namespace std;
int main()
{
    int m,a,b,sm,s,ml;
    cin>>m>>a>>b;
    sm=(a*100+b+40)*m;
    s=sm%100;
    ml=sm/100%1000;
    cout<<ml<<"m "<<s<<"cm";
}
