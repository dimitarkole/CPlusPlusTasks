#include<iostream>
using namespace std;
int main()
{
    int k1,p1,k2,p2,k3,p3,min,h1,h2,h3;
    cin>>k1>>p1>>k2>>p2>>k3>>p3;
    h1=p1-k1;
    h2=p2-k2;
    h3=p3-k3;
    min=h1;
    if(min>h2)min=h2;
    if(min>h3)min=h3;
    cout<<min;
}
