#include<iostream>
using namespace std;
int main()
{
    float x, y, z, a;
    cout<<"Vavedete tri chisla"<<endl;
    cin>>x>>y>>z;
    if (x>y) {a=x; x=y; y=a;}
    if (x>z) {a=x; x=z; z=a;}
    if (y>z) {a=y; y=z; z=a;}
    cout<<x<<" "<<y<<" "<<z ;
    }

