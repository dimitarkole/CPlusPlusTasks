#include<iostream>
using namespace std;
int main()
{
   int n,mn;
   float p,t,mp,mt;
   mp=mt=mn=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>p>>t;
       if((p>mp)||((p==mp)&&(t<mt)))
       {
           mp=p;
           mt=t;
           mn=i;
       }
    }
   cout<<mn<<endl;
}
