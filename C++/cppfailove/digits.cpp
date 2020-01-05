#include<iostream>
using namespace std;
int main()
{
    unsigned int n,ob=0,b=0,n1=0;
    cin>>n;
    n1=n;
    while(n1!=0)
    {
        int k=n1%10;
        n1=n1/10;
        ob=ob*10+k;
    }
    cout<<n+ob;
}
