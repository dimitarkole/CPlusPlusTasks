#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,m,l,n,max=0,min,cas,minut=0;
    cin>>k>>m>>l>>n;
    minut=(l*60+n)-(k*60+m);
    max=k;
    if((max<l)&&(n>m)&&(n))max=l;
    else max=k;
    min=minut%10;
    cas=minut/100;
    cout<<cas<<" "<<min<<endl;
    if(max==l)cout<<"L";
    else cout<<"K";
}
