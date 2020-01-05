#include<iostream>
using namespace std;
int main()
{
    long kg,g,pkg,pg,a,c,okg,og,l;
    cin>>kg>>g>>pkg>>pg;
    a=kg*1000+g;
    c=pkg*1000+pg;
    l=a-c;
    og=l%1000;
    okg=l/1000;
    cout<<okg<<"kg"<<" "<<og<<"g";
}
