#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,min,flag=0;
    cin>>ch1>>ch2;
    min=ch1;
    if(ch2<min)min=ch2;
    for(int i=2;i<=min/2;i++)
    {
        if((i%ch1==0)&&(i%ch2==0))
        {
            for(int j=2;j<i/2;j++)
            {
                if(i%j==0)flag==1;
            }
            if(flag==0)cout<<i<<" ";
            flag=0;
        }
    }
}
