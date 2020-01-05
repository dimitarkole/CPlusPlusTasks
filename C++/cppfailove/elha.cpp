#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int red=n;
    for(int i=1;i<=n*2+2;i++)
    {
        if(i%2==0)
        {
            for(int l=1;l<=n;l++)
            {
                cout<<' ';
            }
            cout<<'*'<<endl;
        }
        else
        {
            for(int k=1;k<=red;k++)
            {
                cout<<' ';
            }
            for(int k=1;k<=i;k++)
          {
              cout<<'*';
          }
          cout<<endl;
          red--;
        }
    }
    return  0;
}
