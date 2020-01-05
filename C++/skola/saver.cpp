#include<iostream>
using namespace std;
int main()
{
    int n,edp,stek,kotiq;
    cin>>n;
    kotiq=n/320;
    n=n-kotiq*320;
    stek=n/8;
    n=n-stek*8;
    edp=n;
    if(edp*0.12>0.82)
    {
        stek++;
        edp=0;
    }
    if(stek*0.82>30.50)
    {
        kotiq++;
        if(320>stek*8+edp) edp=0;
        stek=0;
    }
    cout<<kotiq<<" "<<stek<<" "<<edp;
}
