#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,max=0,ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        sum+=ch;
        if(max<ch)max=ch;
    }
    cout<<sum-max;
}
