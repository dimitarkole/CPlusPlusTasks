#include<iostream>
using namespace std;
int main()
{
    for(int pov=0;pov<2;pov++)
    {
        int n,m,k,sumobsho=0;
        cin>>n>>m>>k;
        short r[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>r[i][j];
                sumobsho=sumobsho+r[i][j];
            }
        }
         int max=0,sum=0;
        for(int i=0;(i<k) && (i<n);i++)
        {
            for(int j=0;(j<k) && (j<m);j++)
            {
                sum=sum+r[i][j];
            }
        }
        max=sum;
        for(int a=0;a<n;a++)
        {
            for(int p=0;p<m;p++)
            {
                sum=0;
                for(int i=a;(i<a+k) && (i<n);i++)
                {
                    for(int j=p;(j<p+k) && (j<m);j++)
                    {
                        sum=sum+r[i][j];
                    }
                }
                if(max<sum)max=sum;
            }
        }
        cout<<sumobsho-max;
    }
}
