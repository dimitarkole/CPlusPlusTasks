#include<iostream>
using namespace std;
int main()
{
    int st,red,n,k;
    cin>>k>>n;
    st=n/k;
    red=n%k;
    if(red>0)st+1;
    cout<<st<<" "<<red;
}
