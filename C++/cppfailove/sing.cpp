#include<iostream>
using namespace std;
int main()
{
    int  c1,c2,c3,e1,d2,e3,d4,e5,d6;
    cin>>c1>>c2>>c3;
    e1=c1%10;
    d2=c1/10;
    e3=c2%10;
    d4=c2/10;
    e5=c3%10;
    d6=c3/10;
    cout<<d2;
    if(e1==d4)cout<<e1<<"'";
    else cout<<e1<<d4;
    if(e3==d6)cout<<e3<<"'";
    else cout<<e3<<d6;
    cout<<e5;
}
