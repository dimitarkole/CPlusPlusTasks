#include<iostream>
using namespace std;
int main()
{
    int n,a,sum=0,flag=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a>1)
        {
        for(int j=2;j<=a/2;j++)
        {
            if(a%j==0)
            {
                flag=1;
                break;
            }

        }

        if(flag==0)sum++;

        flag=0;
        }
    }
    cout<<endl<<sum;
}
