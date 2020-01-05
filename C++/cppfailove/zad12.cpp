#include<iostream>
using namespace std;
int main()
{
    int ed,des,stot,hil;
    for(int i=1001;i<=9999;i++)
    {
        ed=i%10;
        des=i/10%10;
        stot=i/100%100;
        hil=i%1000;
        if(ed+des+stot+hil>9)cout<<i<<" ";
    }
}
