#include<iostream>
using namespace std;
int main ()
{
   int n,c1=1,c2=1,c3=2;
   cin>>n;
   if((n==c1)||(n==c2))cout<<"1";
   else
   {
     for(int i=3;i<=n;i++)
     {
      c3=c1+c2;
      c1=c2;
      c2=c3;
     }
   }
   cout<<c3;
}
