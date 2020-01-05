#include<iostream>
using namespace std;
int main()
{
    int ch1,ed,des,stot,hil,ch2;
    cin>>ch1;
    ed=ch1%10;
    des=ch1/10%10;
    stot=ch1/100%10;
    hil=ch1/1000%10;
    ch2=stot*1000+hil*100+ed*10+des;
    cout<<ch2+ch1;
}
