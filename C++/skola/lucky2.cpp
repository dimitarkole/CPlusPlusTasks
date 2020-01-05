#include<iostream>
using namespace std;
int main()
{
    int ch,ed,des,stot,hil,deshil,stohil,ch1,ch2;
    cin>>ch;
    ed=ch%10;
    des=ch/10%10;
    stot=ch/100%10;
    hil=ch/1000%10;
    deshil=ch/10000%10;
    stohil=ch/100000;

    ch1=stohil+deshil+hil;
    //cout<<ch1<<" ";

    ch2=stot+des+ed;
    //cout<<ch2;
    if((ch1==ch2)&&(stohil<=stot))cout<<"32";
    else if(stohil>stot)cout<<"31";
    else cout<<"30";
}
