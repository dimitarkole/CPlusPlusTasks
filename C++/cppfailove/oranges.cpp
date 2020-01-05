#include<iostream>
using namespace std;
int main()
{
    int por,max=0,min=0,maxmin=0,sum=0;
    cin>>por;
    max=por;
    sum=por;
    for(int i=2;i<=5;i++)
    {
        cin>>por;
        if(max<por)max=por;
        sum+=por;
    }
    sum=(sum-max)+1;
    cout<<sum;
}
