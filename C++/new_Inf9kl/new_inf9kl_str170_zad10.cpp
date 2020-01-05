#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int j=0;j<a;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i][j]!=1)
            {
                if(A[i][j]%2==1)sum++;
            }
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
}
