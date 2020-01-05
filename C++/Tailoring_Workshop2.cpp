#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int table;
    double height, width;
    cin>>table>>height>>width;
    double meterRect=table*(height+2*0.30)*(width+2*0.30);
    double meterScuire=table*(height/2)*(height/2);
    double USD, LV;
    USD=meterRect*7+meterScuire*9;
    LV=USD*1.85;
    cout<<fixed<<setprecision(2)<<USD<<" USD"<<'\n';
    cout<<fixed<<setprecision(2)<<LV<<" BGN";
}
