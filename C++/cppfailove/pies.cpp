#include<iostream>
using namespace std;
int main()
{
    int n,a,b,max=0,min=0,pks;
    cin>>n>>a>>b;
    if(a+b<n)cout<<"0";
    else if(a+b==n)cout<<"1";
    else if((a>=n)&&(b>=n))cout<<n+1;
    else if((a>=n)&&(b<n))cout<<b+1;
    else if((b>=n)&&(a<n))cout<<a+1;
    else if((b<n)&&(a<n))
    {
        max=a;
        if(max<b)max=b;
        min=a;
        if(min>b)min=b;
        pks=min-(n-max)+1;
        cout<<pks;
    }

}
