#include<iostream>
using namespace std;
int main()
{
    int ed,des,stot,flag=0,sum=0;
    for(int i=100;i<=999;i++)
    {
        ed=i%10;
        des=i/10%10;
        stot=i/100%100;
        sum=ed+des+stot;
        flag=0;
        for(int j=2;j<=sum/2;j++)
        {
            if(sum%j==0)
            {
                flag=1;
                break;

            }
        }
        if(flag==0)cout<<sum<<" "<<i<<" * ";
    }
}
