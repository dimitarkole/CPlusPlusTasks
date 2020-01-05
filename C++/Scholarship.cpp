#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float dohod, uspeh, minZaplata;
    cin>>dohod>>uspeh>>minZaplata;
    float stipendiaSocSlab=0,stipendiaUspeh=0;
    if ((dohod<minZaplata) &&(uspeh>4.5)) stipendiaSocSlab=0.35*minZaplata;
    if (uspeh>=5.5)stipendiaUspeh=25*uspeh;
    if ((stipendiaUspeh!=0)||(stipendiaSocSlab!=0))
    {
        if (stipendiaSocSlab>stipendiaUspeh)cout<<"You get a Social scholarship "<<floor(stipendiaSocSlab)<<" BGN";
        else cout<<"You get a scholarship for excellent results "<< floor(stipendiaUspeh)<<" BGN";
    }
    else{
        cout<<"You cannot get a scholarship!";

    }
}
