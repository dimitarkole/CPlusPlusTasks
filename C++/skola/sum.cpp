#include<iostream>
using namespace std;
int main()
{
    int ch1,ch2,ch3;
    cin>>ch1>>ch2>>ch3;
    if((ch1==ch2)&&(ch1==ch3)) cout<<ch1<<ch2<<ch3;
    else if(ch2==ch3)cout<<ch1<<ch2<<ch3<<ch1;
    else cout<<ch1<<ch2<<ch3<<ch2<<ch1;
}
