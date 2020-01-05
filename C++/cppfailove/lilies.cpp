#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,min=21,n2;
    char ch;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>n2;
        if(min<n2)min=n2;
        sum+=n2;
    }
    cout<<sum-min+1;
}
