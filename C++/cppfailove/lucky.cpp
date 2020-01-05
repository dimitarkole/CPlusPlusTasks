#include<iostream>
using namespace std;
int main()
{
    char b1,b2,c1,c2,c3,c4,b3,b4;
    int kodb,kodc;
    cin>>b1>>b2>>c1>>c2>>c3>>c4>>b3>>b4;
    kodb=((int)b1+(int)b2+(int)b3+(int)b4)/10;
    kodc=(c1-'0')*(c2-'0')*(c3-'0')*(c4-'0');
    if(kodb==kodc)cout<<"Yes "<<kodc;
    else cout<<"No";
}
