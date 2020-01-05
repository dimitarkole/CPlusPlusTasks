#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],max;
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
        max=A[i][0];
        cout<<A[i][0]<<" ";
        for(int j=1;j<a;j++)
        {
            cout<<A[i][j]<<" ";
            if(A[i][j]>max)max=A[i][j];
        }
        cout<<max<<endl;
    }

    cout<<endl;
}
