#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int countPicture;
    string size,poracka;
    cin>>countPicture>>size>>poracka;
    float money;
    if ((size=="9X13")||(size=="10X15"))money=countPicture*0.16;
    else if (size=="13X18")money=countPicture*0.38;
    else money=countPicture*2.90;

    if ((size=="9X13")&&(countPicture>49))money=money-money*0.05;
    else if ((size=="10X15")&&(countPicture>79))money=money-money*0.03;
    else if ((size=="13X18")&&((countPicture>49)&&(countPicture<101)))money=money-money*0.03;
    else if ((size=="13X18")&&(countPicture>100))money=money-money*0.05;
    else if ((size=="20X30")&&((countPicture>9)&&(countPicture<51)))money=money-money*0.07;
    else if ((size=="20X30")&&(countPicture>50))money=money-money*0.09;

    if(poracka=="online") money=money-money*0.02;
    cout<<fixed<<setprecision(2)<<money<<"BGN";
}
