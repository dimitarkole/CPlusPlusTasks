#include<iostream>
using namespace std;
int main()
{
    long long k,n,str=0,red=0;
    cin>>k>>n;
    red=n%k;
    str=n/k;
    if(red!=0) str++;
    else red=k;
    cout<<str<<" "<<red;

}
