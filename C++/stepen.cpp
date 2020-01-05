#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,flagProsto=0;
    cin>>x;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            flagProsto=1;
            break;
        }
    }
    if(flagProsto==0)cout<<"0";
    else
    {
        for(int i=x; i>=1;i--)
        {
            for(int j=2; j<=x;j++)
            {
                int resul= pow(i,j);
                if(resul==x)cout<<i<<" "<<j<<endl;
            }
        }
    }
}
