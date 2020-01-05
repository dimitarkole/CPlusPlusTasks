#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],min;
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
        min=A[j][0];
        for(int i=1;i<=n;i++)
        {
            if(A[i][j]<min)min=A[i][j];
        }
        cout<<min<<" ";
    }
    cout<<endl;
}
