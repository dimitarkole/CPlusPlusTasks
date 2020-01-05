#include<iostream>
using namespace std;
int main()
{
    int p;
    cin>>p;
    cout<<"1 ";
    for(int i=2;i<=p/2;i++)
    {
        if(p%i==0)cout<<i<<" ";
    }
    cout<<p;
}
