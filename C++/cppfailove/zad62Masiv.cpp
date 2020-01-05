#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int masiv[a][a],kraj=1;
    for(int g=0;g<a;g++)
    {
        for(int j=0;j<a;j++)
        {
            for(int i=j;i<a;i++)
            {
                masiv[i][j]=kraj;
                kraj++;
            }
        }

    }

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<masiv[i][j]<<" ";

        }
        cout<<endl;
    }
}
