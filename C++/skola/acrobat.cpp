#include<iostream>
using namespace std;
int main()
{
    long long a,max=0,min=1000000000000,sum=0;
    for(int i=1;i<=6;i++)
    {
        cin>>a;
        if(max<a)max=a;
        if(min>a)min=a;
        sum+=a;
    }
    max=min+max;
    sum=(sum-max)/4;
    cout<<sum;
}
