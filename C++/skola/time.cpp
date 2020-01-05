#include<iostream>
using namespace std;
int main()
{
    int nch,nmm,kch,kmm,vreme1,vreme2,vreme3,min,max;

    cin>>nch>>nmm>>kch>>kmm;
    nmm=nmm+nch*60;
    kmm=kmm+kch*60;
    if(kmm<nmm)kmm=kmm+1440;
    vreme1=kmm-nmm;

    cin>>nch>>nmm>>kch>>kmm;
    nmm=nmm+nch*60;
    kmm=kmm+kch*60;
    if(kmm<nmm)kmm=kmm+1440;
    vreme2=kmm-nmm;

    cin>>nch>>nmm>>kch>>kmm;
    nmm=nmm+nch*60;
    kmm=kmm+kch*60;
    if(kmm<nmm)kmm=kmm+1440;
    vreme3=kmm-nmm;

    min=vreme1;
    if(vreme2<min)min=vreme2;
    if(vreme3<min)min=vreme3;

    max=vreme1;
    if(vreme2>max)max=vreme2;
    if(vreme3>max)max=vreme3;

    cout<<min/60<<":";
    if(min%60<10)cout<<"0";
    cout<<min%60<<endl;

    cout<<max/60<<":";
    if(max%60<10)cout<<"0";
    cout<<max%60;
}
