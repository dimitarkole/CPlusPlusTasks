#include<iostream>
using namespace std;
int main()
{
    int n,bred,bros,brtid;
    cin>>n;
    brtid=n/320;
    n=n%320;
    bros=n/8;
    bred=n%8;
    cout<<brtid<<" "<<bros<<" "<<bred;
}
