#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x*2+y*2<=25)
    {
        if((y<=0)&&(x>=0))cout<<"v okaznostae";
        else if((x<=0)&&(y>=0))cout<<"v okaznostae";
    }
    else cout<<"ne e v okaznostae";
}
