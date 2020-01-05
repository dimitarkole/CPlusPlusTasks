#include<iostream>
using namespace std;
int main()
{
    long long n,n1,max,ch1,maxx;
    cin>>n;
    n1=n/10;
    ch1=n%1000;
    max=ch1;
    while(n1>99)
    {
        ch1=n1%1000;
        n1=n1/100;
        maxx=ch1;
        if(max<maxx)max=maxx;
    }

    cout<<max;
}
