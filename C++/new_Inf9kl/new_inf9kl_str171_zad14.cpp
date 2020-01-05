#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],br=0;
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
        for(int j=0;j<a;j++)cout<<A[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i][i]<0)br++;
    }
    cout<<endl<<"br="<<br;
}
