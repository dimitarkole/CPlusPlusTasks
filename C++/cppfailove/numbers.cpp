#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,ch3,ed1,des1,sto1,ed2,des2,sto2,ed3,des3,sto3,br=9;
    cin>>ch1>>ch2>>ch3;
    ed1=ch1%10;
    des1=ch1/10%10;
    sto1=ch1/100;
    ed2=ch2%10;
    des2=ch2/10%10;
    sto2=ch2/100;
    ed3=ch3%10;
    des3=ch3/10%10;
    sto3=ch3/100;
    if((ed1%2==0)||(ed1%3==0))br--;
    if((des1%2==0)||(des1%3==0))br--;
    if((sto1%2==0)||(sto1%3==0))br--;
    if((ed2%2==0)||(ed2%3==0))br--;
    if((des2%2==0)||(des2%3==0))br--;
    if((sto2%2==0)||(sto2%3==0))br--;
    if((ed3%2==0)||(ed3%3==0))br--;
    if((des3%2==0)||(des3%3==0))br--;
    if((sto3%2==0)||(sto3%3==0))br--;
    cout<<br;
}
