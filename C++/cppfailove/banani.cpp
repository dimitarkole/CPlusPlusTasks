#include<iostream>
using namespace std;
int main()
{
    int lv=0,ka6oni=0,paketi=0,kg=0,st=0;
    cin>>lv>>st;
    st=st+lv*100;
    ka6oni=st/2100;
    st=st-(ka6oni*2100);
    paketi=st/1175;
    st=st-(paketi*1175);
    kg=st/250;
    cout<<"ka6oni:"<<ka6oni<<endl<<"paketi:"<<paketi<<endl<<"kg:"<<kg;
}
