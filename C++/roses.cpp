#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int r[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>r[i][j];
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
            for(int i=a;(i<k) && (i<n);i++)
            {
                sum=0;
                for(int j=p;(j<k) && (j<m);j++)
                {
                    sum=sum+r[i][j];
                }
                if(max<sum)max=sum;
            }
        }
    }
    cout<<max;
}
