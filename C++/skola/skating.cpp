#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    short n,min=20,max=0,sum=0;
    for(int i=0;i<6;i++)
    {
        cin>>n;
        if(min>n)min=n;
        if(max<n)max=n;
        sum+=n;
    }
    cout<<sum-(max+min);
}
