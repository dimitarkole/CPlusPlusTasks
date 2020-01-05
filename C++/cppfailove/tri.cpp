#include<iostream>
using namespace std;
int main()
{
    int n,n1[20],br=1;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>n1[i];
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<n1[i]<<"  ";
    }
    cout<<endl<<" ";
    n=n-1;
    do
    {
        for(int i=0;i<=n-1;i++)
        {
            n1[i]=n1[i+1]-n1[i];
            cout<<n1[i]<<"  ";
        }
        n--;
        br++;
        cout<<endl;
        for(int k=0;k<=br;k++)cout<<" ";
    }while(n!=0);
}
