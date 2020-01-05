#include<iostream>
using namespace std;
int main()
{
    int ch1,ch12,ch22,ch2,ch3,brv=0,brd=0;
    cin>>ch12>>ch22>>ch3;
    ch1=ch12;
    ch2=ch22;
    do
    {
        if((ch1>ch2)&&(ch2<ch3))brv++;
        if((ch1<ch2)&&(ch2>ch3))brd++;
        ch1=ch2;
        ch2=ch3;
        cin>>ch3;
    }while(ch3!=0);
    ch3=ch12;
    if(ch1<ch2&&ch3<ch2) brd++;
    if(ch1>ch2&&ch3>ch2) brv++;
    ch1=ch2;ch2=ch3;ch3=ch22;
    if(ch1<ch2&&ch3<ch2) brd++;
    if(ch1>ch2&&ch3>ch2) brv++;
    cout<<brv<<" "<<brd;
}
