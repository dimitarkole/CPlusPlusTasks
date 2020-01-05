#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],min,max,flag=0;
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
        cout<<" "<<max<<endl;
        if(flag=0)
        {
            min=0;
            flag=1;
        }
        if(max<min)min=max;
    }
    cout<<endl<<"min="<<min;
}
