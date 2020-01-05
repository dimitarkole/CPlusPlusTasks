#include<iostream>
using namespace std;
int main()
{
    int kod;
    cin>>kod;
    for(int i=1410;i<=5000;i++)
    {
        if((i*2==kod)||(i==kod))cout<<i;
    }
}
