#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)cout<<" ";
        for(int k=i+1;k>=1;k--)cout<<k;
        for(int l=2;l<=i+1;l++)cout<<l;
        cout<<endl;
    }
    for(int i=n;i>1;i--)
    {
        for(int j=i;j<n+1;j++)cout<<" ";
        for(int k=i-1;k>=1;k--)cout<<k;
        for(int l=2;l<=i-1;l++)cout<<l;
        cout<<endl;
    }
}
