#include<iostream>
using namespace std;
int main()
{
    char ch1,ch2,ch3,ch4,ch5,ch6;
    cin.get(ch1);
    cin.get(ch2);
    cin.get();
    cin.get(ch3);
    cin.get(ch4);
    cin.get();
    cin.get(ch5);
    cin.get(ch6);
    cin.get();
    cout<<ch1;
    if(ch2-'0'==ch3-'0')cout<<ch2<<"'";
    else cout<<ch2<<ch3;
    if(ch4-'0'==ch5-'0')cout<<ch4<<"'";
    else cout<<ch4<<ch5;
    cout<<ch6;
}
