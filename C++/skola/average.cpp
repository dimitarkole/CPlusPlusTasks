#include<iostream>
using namespace std;
int main()
{
    long long n,m;
    cin>>m>>n;
    if(((n+m)/2)%2==0)cout<<(n+m)/2;
    else cout<<(n+m)/2+1;
}
