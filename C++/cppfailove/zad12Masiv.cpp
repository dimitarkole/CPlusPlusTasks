#include<iostream>
using namespace std;
int main()
{
    int a,b;
    double masiv[40][20],sum=0;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>masiv[i][j];
        }
    }
    cout<<endl<<endl;
    for(int i=0;i<a;i++)
    {
        sum=0;
        for(int j=0;j<b;j++)
        {
            cout<<masiv[i][j]<<" ";
            sum+=masiv[i][j];
        }
        cout<<"->"<<sum<<endl;
    }
     for(int j=0;j<b;j++)
    {
        sum=0;
        for(int i=0;i<a;i++)
        {
            sum+=masiv[i][j];
        }
        cout<<sum<<" ";
    }
}
