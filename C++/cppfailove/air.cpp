#include<iostream>
using namespace std;
int main()
{
    int h,m,prod;
    cin>>h>>m>>prod;
    do
    {
        if(prod>=60)
        {
            h++;
            prod=prod-60;
        }
    }while(prod>=60);
    m=m+prod;
    if(m>=60)
    {
        h++;
        m=m-60;
    }
    if(h>=24)h=h-24;
    cout<<h<<" h "<<m<<" m ";
}
