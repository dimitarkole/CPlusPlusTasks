#include<iostream>
using namespace std;
int main()
{
    int m[6][2],m2[3][2],m3[10010],m4[3];
    m4[0]=0;
    m4[1]=0;
    m4[2]=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>m[i][j];
        }
    }
    for(int i=0;i<=10010;i++)m3[i]=0;
    int h,w,flag=1,br=0;
    for(int i=0;i<6;i++)
    {
        h=m[i][0];
        w=m[i][1];
        if ((h!=0) && (w!=0))
        {
            for(int j=i+1;j<6;j++)
            {
                flag=1;
                if ((w==m[j][0] && h==m[j][1])|| (w==m[j][1] && h==m[j][0]))
                {
                    flag=0;
                    m2[br][0]=w;
                    m2[br][1]=h;
                    br++;
                    m[j][0]=0;
                    m[j][1]=0;
                    m[i][0]=0;
                    m[i][1]=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"0";
                break;
            }
        }
    }
    if (flag==0)
    {
        br=0;
        for(int i=0;i<3;i++)
        {
            h=m2[i][0];
            w=m2[i][1];
            m3[h]=m3[h]+1;
            m3[w]=m3[w]+1;
        }
        br=0;
        flag=0;
        for(int i=0;i<=10;i++)
        {
            cout<<"i= "<<i<<" m3[i]= "<<m3[i]<<endl;
            if (m3[i]==1)
            {
                cout<<0;
                flag=1;
                break;
            }else if ((m3[i]==2))
            {
                m4[br]=i;
                br++;
            }
            else if ((m3[i]==4))
            {
                m4[br]=i;
                br++;
                m4[br]=i;
                br++;
            }
            else if ((m3[i]==6))
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
            cout<<m4[0]*m4[1]*m4[2];
        }
    }
}
/*
15 4
3 6
4 15
6 15
6 15
3 6

0
*/
