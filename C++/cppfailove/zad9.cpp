#include<iostream>
using namespace std;
int main()
{
    int k,sum=0,ed,des,stot;
    cin>>k;
    for(int i=100;i<1000;i++)
    {
        ed=i%10;
        des=i/10%10;
        stot=i/100;
        sum=ed+des+stot;
        if(sum==k)cout<<i<<" ";
    }
}
