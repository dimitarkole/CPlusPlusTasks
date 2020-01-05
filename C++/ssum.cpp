#include<iostream>
#include<cmath>
using namespace std;
double checkProstoCh(int ch)
{
    bool flag=1;
    for(int i=2;i<=sqrt(ch);i++)
    {
        if(ch%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int x;
    cin>>x;
    int count=0;
    bool flagI,flagJ;
    for(int i=2;i<=x;i++)
    {
        for(int j=2;j<=x;j++)
        {
            flagI=checkProstoCh(i);
            flagJ=checkProstoCh(j);
            if((flagI==1)&&(flagJ==1)&&(i+j==x))
            {
                count=count+1;
                if((i==x/2)&&(j==x/2)&&(x%2==0))count=count+1;
            }
        }
    }
    cout<<count/2;
}
