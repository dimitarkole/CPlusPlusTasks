#include<iostream>
using namespace std;
int main()
{
    int n,max,ed,stot,des,ch1,ch2,ch3;
    cin>>n;
    ed=n%10;
    des=n/10%10;
    stot=n/100;
    ch1=stot*10+des;
    ch2=stot*10+ed;
    ch3=des*10+ed;
    max=ch1;
    if(max<ch2)max=ch2;
    if(max<ch3)max=ch3;
    cout<<max;
}
