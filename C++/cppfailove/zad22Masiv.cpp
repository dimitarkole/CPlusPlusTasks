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
    for(int i=0;i<a;i++)
    {
        izhod+=b;
        for(int j=izhod;j>=izhod-b+1;j--)
        {
            masiv[i][j]=j;
            cout<<masiv[i][j]<<" ";
        }
        cout<<endl;
    }

}
