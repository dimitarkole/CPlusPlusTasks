#include<iostream>
using namespace std;
int main()
{
    int cislo,ed,des,stot,max=0,ch1,ch2,ch3,ch4,ch5;
   // cout<<"vavedete 3cifreno cislo"<<endl;
    cin>>cislo;
    ed=cislo%10;
    des=cislo/10%10;
    stot=cislo/100%10;
    ch1=ed+des+stot;
    ch2=ed*des*stot;
    ch3=ed*des+stot;
    ch4=ed+des*stot;
    //cout<<ch1<<endl<<ch2<<endl<<ch3<<endl<<ch4<<endl<<ch5<<endl;
    max=ch1;
    if(max<ch2)max=ch2;
    if(max<ch3)max=ch3;
    if(max<ch4)max=ch4;
    if(max<ch5)max=ch5;
    cout<<max;
}
