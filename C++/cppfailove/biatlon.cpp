#include<iostream>
using namespace std;
int main()
{
    int n,min,s,iz,minim,br=1;
    cin>>n>>min>>s>>iz;
    iz=5-iz;
    minim=min*60+s+iz*30;
    for(int i=2;i<=n;i++)
    {
         cin>>min>>s>>iz;
         iz=5-iz;
         if(minim>min*60+s+iz*30)
         {
             br=i;
             minim=min*60+s+iz*30;
         }
    }
    cout<<br<<endl<<minim/60<<" "<<minim%60;
}
