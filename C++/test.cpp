#include<iostream>
using namespace std;
int main()
{

    double s=0,n;
    for(int i=1;i<2017;i++)
    {

        n=i*(i+1);
        s=s+1/n;
    }
    cout<<"s= "<<s;
}
