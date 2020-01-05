#include<iostream>
using namespace std;
int main()
{
    char b1,b2,b3;
    int sumc=0;
    cin>>b1>>b2>>b3;
    if((b1>='0')&&(b1<='9'))sumc++;
    if((b2>='0')&&(b2<='9'))sumc++;
    if((b3>='0')&&(b3<='9'))sumc++;
    cout<<sumc;
}
