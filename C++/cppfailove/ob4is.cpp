#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,stot,xil,m;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    stot=a/100%10;
    xil=a/1000;
    m=ed*1000+des*100+stot*10+xil*1;
    cout<<m;
}
