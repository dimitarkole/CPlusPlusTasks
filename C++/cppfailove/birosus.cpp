#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int k,x,y,p=n*m,br=2;
    bool v[n][m],v2[n][m];
    cin>>k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            v[i][j]=0;
            v2[i][j]=0;
        }
    }
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        v[x-1][y-1]=1;
        v2[x-1][y-1]=1;
    }
    cout<<endl;
    p=p-k;
    cout<<"p= "<<p<<"  ";
    while (p>0)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (v2[i][j]==1)
                {
                    if((i>0)&& (v2[i-1][j]==0))
                    {
                        v[i-1][j]=br;
                        p--;
                    }
                    if((i<n)&& (v2[i+1][j]==0))
                    {
                        v[i+1][j]=br;
                        p--;
                    }

                    if((j>0)&& (v2[i][j-1]==0))
                    {
                        v[i][j-1]=br;
                        p--;
                    }
                    if((j<m)&& (v2[i][j+1]==0))
                    {
                        v[i][j+1]=br;
                        p--;
                    }

                }
            }

        }
        br=br+1;
        cout<<endl<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<v[i][j]<<" ";
                v2[i][j]=v[i][j];
            }
            cout<<endl;
        }
        if(p<0)break;


    }
    cout<<br-2;
}
