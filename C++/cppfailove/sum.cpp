#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,stod,xil;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    stod=a/100%10;
    xil=a/1000;
    if(ed>des&&stod>xil)cout<<ed+des+stod+xil;
    else cout<<ed*des*stod*xil;
}
