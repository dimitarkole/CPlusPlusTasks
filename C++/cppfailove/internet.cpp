#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=d)cout<<a;
    else cout<<a+c*(d-b);
}
