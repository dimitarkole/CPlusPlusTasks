#include<iostream>
using namespace std;
int main()
{
    int k1,k2,k3,d1,d2,d3,n1,n2,n3,min;
    cin>>d1>>k1>>d2>>k2>>d3>>k3;
    n1=k1-d1;
    n2=k2-d2;
    n3=k3-d3;
    min=n1;
    if(min>n2)min=n2;
    if(min>n3)min=n3;
    cout<<min;
}
