#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,max;
    cin>>a>>b>>x>>y;
    cout<<b+x<<" ";
    if(a==y)cout<<a;
    max=a;
    if(max<y)
    {
        max=y;
        cout<<max;
    }
}
