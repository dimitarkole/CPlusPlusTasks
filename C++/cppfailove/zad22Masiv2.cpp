#include<iostream>
using namespace std;
int main()
{
    int a,b,izhod=1;
    cin>>a>>b;
    double masiv[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            masiv[i][j]=izhod;
            izhod++;
            cout<<masiv[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
    izhod=0;
    for(int i=1;i<=a;i++)
    {

        for(int j=1;j<=b;j++)
        {
            masiv[i][j]=i*b-j+1;
            cout<<masiv[i][j]<<" ";
        }
        cout<<endl;
    }


}
