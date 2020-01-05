#include<iostream>
using namespace std;
int main()
{
    int m[6][2],m3[10010],m4[3],h;
    unsigned long long v=0;
    m4[0]=0;
    m4[1]=0;
    m4[2]=0;
    for(int i=0;i<=10010;i++)m3[i]=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m[i][j];
            h=m[i][j];
            m3[h]=m3[h]+1;
        }
    }
    int w,flag=0,br=0;
    br=0;
    for(int i=0;i<10010;i++)
    {

        if ((m3[i]==1) && (m3[i]!=0) && (m3[i]%2==1))
        {
            cout<<0;
            flag=1;
            break;
        }else if ((m3[i]==4))
        {
            m4[br]=i;
            br++;
        }
        else if ((m3[i]==8))
        {
            m4[br]=i;
            br++;
            m4[br]=i;
            br++;
        }
        else if ((m3[i]==12))
        {
            m4[br]=i;
            br++;
            m4[br]=i;
            br++;
            m4[br]=i;
            br++;
        }
    }
    if (flag==0)
    {
        long long a,b,c;
        a=m4[0];
        b=m4[1];
        c=m4[2];
        v=a*b*c;
        cout<<v;
    }
}
