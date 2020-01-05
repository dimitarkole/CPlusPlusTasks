#include<iostream>
using namespace std;
int main()
{
    int parvastojnost,ed,des,stot,ch1,ch2,ch3,ch4,max;
    cin>>parvastojnost;
    ed=parvastojnost%10;
    des=parvastojnost/10%10;
    stot=parvastojnost/100;
    ch1=ed*des*stot;
    ch2=ed+des+stot;
    ch3=ed*des+stot;
    ch4=ed+des*stot;
    max=ch1;
    if(max<ch2)max=ch2;
    if(max<ch3)max=ch3;
    if(max<ch4)max=ch4;
    cout<<max;
}
