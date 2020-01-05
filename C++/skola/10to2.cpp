#include<iostream>
using namespace std;
int main()
{
    long long cislo,ostatyk,chislo2=0,br=0;
    cin>>cislo;
    while(cislo!=0)
    {
        ostatyk=cislo%2;
        chislo2=chislo2*10+ostatyk;
        cislo=cislo/2;
    }
    cout<<chislo2<<endl;
    while (chislo2!=0)
    {
        cout<<chislo2%10;
        chislo2=chislo2/10;
    }
}
