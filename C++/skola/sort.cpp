#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,ch3,ch4;
    cin>>ch1>>ch2>>ch3>>ch4;
    if((ch1<ch2)&&(ch2<ch3)&&(ch3<ch4))cout<<"Ascending";
    else if((ch1>ch2)&&(ch2>ch3)&&(ch3>ch4))cout<<"Descending";
    else cout<<"Mixed";
}
