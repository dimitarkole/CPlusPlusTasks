#include<iostream>
using namespace std;
int main()
{
    int n,chksp[n],n2[n],flag=1,br1=0,br2=0,povch;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        chksp[i]=0;
        n2[i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        cin>>n2[i];
        for(int j=0;j<=i;j++)
        {
           if(n2[j]==n2[i])
           {
               flag=0;
               br1++;
               chksp[j]++;
               povch=n2[i];
           }
        }
    }
    br1--;
    if(flag=0)
    {
        cout<<povch;
        for(int i=0;i<=n;i++)
        {
            if(br2==br1)break;
            if(chksp[i]!=0)
            {
                cout<<chksp[i]+1;
                br2++;
            }
        }
    }
    else cout<<"No";
}
