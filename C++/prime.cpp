#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char ch;
    int n[3005],br=0;
    do
    {
        cin.get(ch);
        if(ch=='\n')break;
        else n[br]=ch-'0';
        br=br+1;
    }while(br<=3005);
    int prime=1,flagNextPrime,sum=0;
    for(int i=1;i<=br;i++)
    {
        do
        {
            prime=prime+1;
            flagNextPrime=0;
            for(int i=2;i<=sqrt(prime);i++)
            {
                if(prime%i==0)
                {
                    flagNextPrime=1;
                    break;
                }
            }

        }while(flagNextPrime==1);
        sum=sum+(prime*n[i-1]);
    }
    cout<<sum;
}
