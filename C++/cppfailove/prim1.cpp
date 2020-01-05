#include<iostream>
using namespace std;
int pch(int l)
{
    int flag=0;
    if (l==1) flag=1;
    else
    {
        for(int i=2;i<=l/2;i++)
        {
            if (l%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int n,n1,br=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>n1;
       if(pch(n1)==0)br++;
    }
    cout<<br;
}
