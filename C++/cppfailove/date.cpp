#include<iostream>
using namespace std;
int main()
{
    int data,mes,god,godn,ed,des,sto,hil,data1,mesec1,flag=0;
    cin>>data>>mes>>godn;
    god=godn;
    do
    {
        ed=god%10;
        des=god/10%10;
        sto=god/100%10;
        hil=god/1000;
        data1=ed*10+des;
        mesec1=sto*10+hil;
        if((god>godn)||((god==godn)&&(mesec1>mes))||((god==godn)&&(mesec1==mes)&&(data1>data)))
        {
            if((data1>=1)&&(data1<=28)&&(mesec1==2))flag=1;
            else if((data1==29)&&(mesec1==2)&&(god%4==0))flag=1;
            else if((data1>=1)&&(data1<=30)&&((mesec1==4)||(mesec1==6)||(mesec1==9)||(mesec1==11)))flag=1;
            else if((data1>=1)&&(data1<=31)&&((mesec1==1)||(mesec1==3)||(mesec1==5)||(mesec1==7)||(mesec1==8)||(mesec1==10)||(mesec1==12)))flag=1;
        }
        if(flag!=1)god++;
    }while (flag!=1);
    if(data1<=9)cout<<"0"<<data1<<".";
    else cout<<data1<<".";
    if(mesec1<=9)cout<<"0"<<mesec1<<".";
    else cout<<mesec1<<".";
    cout<<god;
}
