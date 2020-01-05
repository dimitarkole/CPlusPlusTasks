#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,stot,ch1,ch2;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    stot=a/100;
    ch1=(des*10+ed)*stot;
    ch2=(stot*10+des)*ed;
    if(ch1>ch2)cout<<ch1;
    else cout<<ch2;
}
