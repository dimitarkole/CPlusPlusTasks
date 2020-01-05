#include<iostream>
using namespace std;
int main()
{
    int nch1,nm1,kch1,km1,nch2,nm2,kch2,km2,nch3,nm3,kch3,km3;
    cin>>nch1>>nm1>>kch1>>km1>>nch2>>nm2>>kch2>>km2>>nch3>>nm3>>kch3>>km3;
    nm1=nch1*60+nm1;
    km1=kch1*60+km1;
    nm2=nch2*60+nm2;
    km2=kch2*60+km2;
    nm3=nch3*60+nm3;
    km3=kch3*60+km3;
    km1=km1-nm1;
    km2=km2-nm2;
    km3=km3-nm3;
    if((km1!=km2)&&(km1!=km3)&&(km2!=km3))
    {
        for(int i=1;i<=3;i++)
        {
            if((km1>km2)&&(km1>km3))
            {
                cout<<"A";
                km1=0;
            }
            if((km2>km1)&&(km2>km3))
            {
                cout<<"B";
                km2=0;
            }
            if((km3>km1)&&(km3>km2))
            {
                cout<<"C";
                km3=0;
            }
        }
    }
    else
    {
        if((km1==km2)&&(km1>km3))cout<<"XC";
        else if((km1==km2)&&(km1<km3))cout<<"CX";
        else if((km1==km3)&&(km1>km2))cout<<"XB";
        else if((km1==km3)&&(km1<km2))cout<<"BX";
        else if((km2==km3)&&(km1<km2))cout<<"XA";
        else if((km2==km3)&&(km1>km2))cout<<"AX";
    }

}
