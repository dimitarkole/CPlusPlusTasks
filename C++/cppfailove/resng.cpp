#include<iostream>
using namespace std;
int main()
{
    char b1,b2,b3,b4,B1,B2,B3,B4;
    cin>>b1>>b2>>b3>>b4;
    if((b1>='a')&&(b1<='z'))B1=b1+('A'-'a');
    else B1=b1;
    if((b2>='a')&&(b2<='z'))B2=b2+('A'-'a');
    else B2=b2;
    if((b3>='a')&&(b3<='z'))B3=b3+('A'-'a');
    else B3=b3;
    if((b4>='a')&&(b4<='z'))B4=b4+('A'-'a');
    else B4=b4;
    cout<<B1<<B2<<B3<<B4;
}
