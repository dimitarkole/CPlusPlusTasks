#include<iostream>
using namespace std;
int main()
{
    int a,b,brdyr,p,P,sum=0,n,k;
    cin>>a>>b>>p;
    P=(a+b)*2;
    if(P%p==0)brdyr=P/p;
    else
    {
        do
        {
            P+=P;
        }while(P%p!=0);
        brdyr=P/p;
    }
    n=brdyr-1;
    if(n%2==0)
    {
        k=n/2;
        sum=(k+1)*p*k;
    }
    else
    {
        k=n/2;
        sum=(k+1)*p*k*2+2*(k+1)*p;
    }
    cout<<brdyr<<" "<<sum;
}
