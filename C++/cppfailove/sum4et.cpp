#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,stot,xil,sum;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    stot=a/100%10;
    xil=a/1000;
    sum=ed+des+stot+xil;
    if(sum%2==0)cout<<"sumata e cetna";
    else cout<<"sumata e necetna";
}
