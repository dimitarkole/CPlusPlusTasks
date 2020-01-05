#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n][n],flag=1,ij[2],ij2[2],max,min,i2;
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

    max=A[0][1];
    ij[0]=0;
    ij[1]=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(max<A[i][j])
            {
                max=A[i][j];
                ij[0]=i;
                ij[1]=j;
            }
        }
    }
    //cout<<"Maksimalniqt element e "<<max<<endl;
    min=A[1][0];
    ij2[0]=1;
    ij2[1]=0;
    for(int i=2;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(min>A[i][j])
            {
                min=A[i][j];
                ij2[0]=i;
                ij2[1]=j;
            }
            //cout<<"i="<<i<<"   j="<<j<<endl;
        }
    }
    A[ij[0]][ij[1]]=min;
    A[ij2[0]][ij2[1]]=max;
    cout<<endl<<endl<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    /*cout<<"max="<<max<<endl<<"min="<<min<<endl;
    cout<<" "<<ij[0]<<" "<<ij[1];
    cout<<" "<<ij2[0]<<" "<<ij2[1];*/

}
