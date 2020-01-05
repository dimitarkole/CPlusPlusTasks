#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,k,st;
    cin>>n>>m>>k;
    st=ceil((float)n/(k-m));
    cout<<st;
}

