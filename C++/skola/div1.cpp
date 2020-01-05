#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,min,flag=0,flag2=2;
    cin>>ch1>>ch2;
    min=ch1;
    if(ch2<min)min=ch2;
    for(int i=2;i<=min/2;i++)//vsi4ki prost chisla
    {
        if((ch1%i==0)&&(ch2%i==0))
        {
            for(int j=2;j<i/2;j++)//j da li e prosto
            {
                if(i%j==0)flag==1;
            }
            if(flag==0)
            {
                cout<<i<<" ";
                flag2=3;
                flag=0;
            }
        }
    }
    if(flag2==2)cout<<"-1";
}
