#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n][n],a=0,b=0,br=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
            cin>>m[i][j];
       }
    }
    do
    {
        if(m[a+1][b]==1)
        {
            a=a+1;
            br++;
            cout<<"a+1 "<<a+1<<" ="<<m[a+1][b]<<endl;
        }else if(m[a][b+1]==1)
        {
            b=b+1;
            br++;
            cout<<"b+1= "<<b+1<<" ="<<m[a][b+1]<<endl;
        }else br++;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=a || j!=b)
                {
                   if(m[i][j]==0)m[i][j]=1;
                   else if(m[i][j]==1)m[i][j]=0;
                }

            }
        }
        m[a][b]=0;
    }while((a!=n-1) && (b!=n-1));
    cout<<br+1<<endl<<endl;

}
