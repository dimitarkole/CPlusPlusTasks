#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int m[a][a],f,f1,br=1,br2=1,s,s1,t,t1,t2=1,fo,fo1,fo2;
    f=0;
    s=a-1;
    t=a-1;
    fo=0;
    s1=1;
    t1=a-1;
    fo1=a-1;
    fo2=1;
    f1=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            m[i][j]=0;
        }

    }


    for(int i=0;i<a*2-1;i++)
    {
        if(br2==1)
        {
            for(int j=f1;j<a-f1;j++)
            {
                m[f][j]=br;
                br++;
            }
            f++;
            f1++;

        }



        if(br2==2)
        {
            for(int j=s1;j<a-s1;j++)
            {
                m[j][s]=br;
                br++;
            }
            s--;
            s1++;
        }



        if(br2==3)
        {
            for(int j=t1;j>=t2;j--)
            {
                m[t][j]=br;
                br++;
            }
            t--;
            t1--;
            t2++;
        }


        if(br2==4)
        {

            for(int j=fo1;j>=fo2;j--)
            {
                m[j][fo]=br;
                br++;
            }
            fo++;
            fo1--;
            fo2++;
        }


        br2++;
        if(br2==5) br2=1;
    }


    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(m[i][j]==0)m[i][j]=a*a;
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
