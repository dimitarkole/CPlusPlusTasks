#include<iostream>
using namespace std;
int main()
{
    int n,e,d,s,p;
    cin>>n;
    e=n%10;
    d=n/10%10;
    s=n/100%10;
    p=e*100+d*10+s;
    cout<<p;
}
