#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int m[a][a],br=a*a,br2=1,i=0,k=a-1,l=0;
    do
    {
        /*for(int j=i;j<a;j++)
        {
            m[i][j]=br2;
            br2++;
        }
        for(int j=a-1;j<a;j++)
        {
            m[j][k]=br2;
            br2++;
        }
        k--;*/
        l=a-i-1;

        /*for(int j=l;j>=0;j--)
        {
            m[l][j]=br2;
            br2++;
        }
        for(int j=l;j>i+1;j++)
        {
            m[j][l]=br2;
            br2++;
        }*/
        for(int j=l;j>0;j--)
        {
            m[j][i]=br2;
            br2++;
        }
        i++;
    } while(br2<=a*a);
    cout<<br2<<endl<<endl;
    /*for(int i=a-1;i>=0;i--)
    {
        for(int j=0;j<a;j++)
        {
            m[j][i]=br2;
            cout<<m[i][j]<<" i="<<i<<"  j="<<j<<endl;
            br2++;
        }
    }*/
    cout<<endl<<endl;
    cout<<m[0][0]<<endl<<endl;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
