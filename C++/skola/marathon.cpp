#include<iostream>
using namespace std;
int main()
{
    int x,y,kilometyrzaden=0,den=0;
    cin>>x>>y;
    do
    {
        kilometyrzaden=x*10/100;
        x=x+kilometyrzaden;
        den++;
    }while (x<y);
    cout<<den;
}
