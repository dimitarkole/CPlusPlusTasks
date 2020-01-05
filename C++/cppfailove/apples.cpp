#include<iostream>
using namespace std;
int main()
{
    int y,k,n,flag=0;
    cin>>y>>k>>n;
    if(y!=n)
    {for(int i=0;i+y<=n;i++)
    {
        if((y+i)%k==0)
        {
            flag=1;
            cout<<i<<" ";
        }
    }}
    else if(flag==0)cout<<"-1";
}
