#include<iostream>
using namespace std;
int main()
{
    int s,b;
    cin>>s;
    b=s/7*5;
    if(s%7==0) cout<<b;
    else
    {
        if(s%7<6)cout<<b+s%7;
        else cout<<b+5;
    }
}
