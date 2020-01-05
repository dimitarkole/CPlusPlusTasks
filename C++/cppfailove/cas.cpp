#include<iostream>
using namespace std;
int main()
{
    int cas1,min1,cas2,min2,ostcas,ostmin;
    cin>>cas1>>min1>>cas2>>min2;
    min1=min1+cas1*60;
    min2=min2+cas2*60;
    if(min2<min1)min2=min2+24*60;
    ostmin=min2-min1;
    ostcas=ostmin/60;
    ostmin=ostmin%60;
    if(ostcas<=9)cout<<"0";
    cout<<ostcas<<":";
    if(ostmin<=9)cout<<"0";
    cout<<ostmin;
}
