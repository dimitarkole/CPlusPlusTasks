#include<iostream>
using namespace std;
int main()
{
    int n,m,nt,mt,min;
    cin>>n>>m;
    nt=(n%2)*m;
    min=nt;
    mt=(m%2)*n;
    if(min>mt)min=mt;
    //if((n*m)-delen2==delen2)cout<<"0";
    cout<<min;
}
