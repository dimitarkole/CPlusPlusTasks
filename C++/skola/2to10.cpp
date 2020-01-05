#include<iostream>
using namespace std;
int main()
{
    long long cislo,stepen=1,ch10=0;
    cin>>cislo;
    do
    {
        ch10+=stepen*(cislo%10);
        cislo=cislo/10;
        stepen*=2;
    }while (cislo!=0);
    cout<<ch10;
}
