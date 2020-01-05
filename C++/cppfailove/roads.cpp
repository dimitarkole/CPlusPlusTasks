#include<iostream>
using namespace std;
int main()
{
    long long n,m,sl1,sl2,min,max,sum=0;
    cin>>n>>m;
    unsigned long long A[n+1],km;
    for(long long i=0;i<n+1;i++)A[i]=0;
    for(int i=1;i<=m;i++)
    {
        cin>>sl1>>sl2>>km;
        if(km%2!=0)
        {
            min=sl1;
            max=sl2;
            if(min>sl2)
            {
                min=sl2;
                max=sl1;
            }
            A[min]+=km/2+1;
            A[max]+=km/2;
        }
        else
        {
            A[sl1]+=km/2;
            A[sl2]+=km/2;
        }
    }
    max=A[1];
    for (long long i=2;i<=n;i++)
    {
        if(A[i]>max)max=A[i];
    }
    for (long long i=1;i<=n;i++)
    {
        if(A[i]==max)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl<<max;
}
