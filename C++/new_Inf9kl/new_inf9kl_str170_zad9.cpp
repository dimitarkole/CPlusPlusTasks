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
            if(A[i][j]%3==0)sum+=A[i][j];
        }
        cout<<sum<<endl;
        sum=0;
    }

    cout<<endl;
}
