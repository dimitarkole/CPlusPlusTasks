#include<iostream>
using namespace std;
int main()
{
    int a,a2=0;
    cin>>a;
    unsigned long long masiv[a][a];
    for(int i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            a2+=a;
            for(int j=0;j<a;j++)
            {
                masiv[i][j]=i*a-j;
                cout<<masiv[i][j]<<" ";
            }
            cout<<endl;
        }
        if(i%2==1)
        {
            for(int j=1;j<=a;j++)
            {
                masiv[i][j]=(i-1)*a+j;
                cout<<masiv[i][j]<<" ";
            }
            cout<<endl;
        }
    }


}
