#include<iostream>
using namespace std;
int main()
{
    long long m,n,p;
    cin>>m>>n;
    p=m*n;
    while (m!=n)
    {
         if(m<n)n=n-m;
         else m=m-n;
    }
    cout<<p/m;
}
