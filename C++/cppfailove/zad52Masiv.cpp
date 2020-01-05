#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long masiv[n][n];
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            masiv[i][j]=(j-1)*n+i;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<masiv[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int j=1;j<=n;j++)
    {
        if(j%2==0)
        {
            for(int i=n;i>=1;i--)
            {
                masiv[i][j]=j*n-i+1;
               // cout<<masiv[i][j]<<" ";
            }
            cout<<endl;
        }
        if(j%2==1)
        {
            for(int i=1;i<=n;i++)
            {
                masiv[i][j]=(j-1)*n+i;
               // cout<<masiv[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<masiv[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
