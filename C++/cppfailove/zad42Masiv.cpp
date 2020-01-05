#include<iostream>
using namespace std;
int main()
{
    int a,sum=0;
    cin>>a;
    long long masiv[a][a];
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cin>>masiv[i][j];
            if(j>=i)sum+=masiv[i][j];
        }
    }
    cout<<"sum nad diagonala="<<sum<<endl<<endl;
    sum=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)sum+=masiv[i][j];
    }
    cout<<"sum po diagonala="<<sum<<endl<<endl;
}
