#include<iostream>
using namespace std;
int main()
{
    int ed,des,stot;
    for(int i=111;i<=999;i++)
    {
        ed=i%10;
        des=i/10%10;
        stot=i%100;
        if((ed!=0)&&(des!=0)&&(stot!=0))
        {
            if((i%ed==0)&&(i%des==0)&&(i%stot==0))cout<<i<<" ";
        }
    }
}
