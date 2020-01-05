#include<iostream>
using namespace std;
int main()
{
    int a,b,br=0,m[10],flag=0,ch;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int j=0;j<10;j++)m[j]=0;
        flag=0;
        ch=i;
        do
        {
        if (m[ch%10]==1)
        {
            flag=1;
            break;
        }else
        {
            m[ch%10]=1;
            ch=ch/10;
        }
        }while (ch>0);
        if (flag==0)br=br+1;
    }
    cout<<br<<endl;
}
