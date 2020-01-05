#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,stot,xil;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    stot=a/100%10;
    xil=a/1000;
    cout<<xil<<endl<<stot<<endl<<des<<endl<<ed;
    }
