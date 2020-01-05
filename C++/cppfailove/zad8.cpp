#include<iostream>
using namespace std;
int main()
{
    int n;
    float a,sum=1;
    cin>>n>>a;
    for(int i=1;i<=n;i++)
    {
        sum*=a;
    }
    cout<<sum<<endl;
}
