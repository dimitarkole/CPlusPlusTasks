#include<iostream>
using namespace std;
int main()
{
    char b1,b2,b3,b4,ch1,ch2,ch3,ch4;
    int proizvedenie=1,sum=0;
    cin>>b1>>b2>>ch1>>ch2>>ch3>>ch4>>b3>>b4;
    ch1=ch1-'0';
    ch2=ch2-'0';
    ch3=ch3-'0';
    ch4=ch4-'0';
    proizvedenie=ch1*ch2*ch3*ch4;
    b1=b1-'a';
    b2=b2-'a';
    b3=b3-'a';
    b4=b4-'a';
    sum=b1+b2+b3+b4;
    if(proizvedenie==sum)cout<<"Yes "<<proizvedenie;
    else cout<<"No";
}
