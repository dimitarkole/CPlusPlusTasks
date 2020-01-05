#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n],flag=1,ij[2],ij2[2],sum=0,br=0,i2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i][j]%2==0)br++;
        }
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            flag=0;
            for (int p=2;p<=A[i][j]/2;p++)
            {
                if(A[i][j]%p==0)
                {
                    flag=1;
                    break;
                }
            }
            if((flag==0)&& (A[i][j]!=1))
            {
                sum+=A[i][j];
                cout<<"prosto "<<A[i][j]<<endl;
            }
        }
    }
    cout<<"Sumata e:"<<sum<<endl;
    cout<<"Broq e:"<<br;

}
