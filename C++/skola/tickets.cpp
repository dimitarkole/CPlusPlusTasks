#include<iostream>
using namespace std;
int main()
{
    int ch,ed,des,sto,hil,deshil,ch1,ch2;
    cin>>ch;
    ed=ch%10;
    des=ch/10%10;
    sto=ch/100%10;
    hil=ch/1000%10;
    deshil=ch/10000%10;
    ch1=deshil*10+ed;
    ch2=hil*100+sto*10+des;
    if(ch2%ch1==0)cout<<"Yes"<<endl<<ch2/ch1;
    else cout<<"Sorry";
}
