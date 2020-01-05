#include<iostream>
using namespace std;
int main()
{
    int casn,mm,kolcas=0,casns,minns,malkomez,golmezcas,gm,cas;
    char dvet;
    cin>>casn;
    cin.get(dvet);
    cin>>mm>>malkomez>>golmezcas>>gm>>cas;
    kolcas=kolcas+casn*60+mm+cas;
    minns=kolcas%60;
    casns=kolcas/60;
    cout<<"1 "<<casn<<":"<<mm<<" "<<casns<<":"<<minns<<endl;
    for(int i=2;i<=7;i++)
    {

        cout<<i<<" "<<casns<<":"<<minns+malkomez;
        kolcas=kolcas+cas;
        if(i==golmezcas)kolcas+=gm;
        else kolcas+=malkomez;
        minns=kolcas%60;
        casns=kolcas/60;
        cout<<" "<<casns<<":";
        if(minns<10) cout<<"0";
        cout<<minns<<endl;


    }
}
