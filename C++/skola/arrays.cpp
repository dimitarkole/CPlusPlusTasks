#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2[1001],m,m1,m2[1001],flag=0,br=0,ed;
    for(int i=0;i<=1000;i++)
    {
        n2[i]=0;
        m2[i]=0;
    }
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>n1;
        n2[n1]=1;
      /*  do
        {
            ed=n1%10;
            n1=n1/10;
            n2[ed]=1;
        }while(n1!=0);*/

    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>m1;
        m2[m1]=1;
       /* do
        {
            ed=m1%10;
            m1=m1/10;
            m2[ed]=1;
        }while(m1!=0);*/
    }
    /*for (int i=0; i<=9; i++)
    {

        cout<<"n"<<i<<"="<<n2[i];
        cout<<"  m"<<i<<"="<<m2[i]<<endl;
    }*/
    for(int i=0;i<=1000;i++)
    {
        if(n2[i]!=m2[i])
        {
            flag=1;
            if (n2[i]==1)cout<<i<<" ";
        }
        else if(n2[i]==1) br++;
    }
    if(flag==0)cout<<br;

}
