#include<iostream>
using namespace std;
int main()
{
    int ch,m,s,ost;
    cin>>ch>>m>>s;
    s=((ch*60+m)*60+s)-28800;
    ost=s%108;
    if(ost<=59)cout<<"primini";
    else if (ost<=63)cout<<"iz4akaj";
    else if (ost<=103)cout<<"spri";
    else cout<<"iz4akaj";
}
