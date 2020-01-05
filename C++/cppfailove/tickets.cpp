#include<iostream>
using namespace std;
int main()
{
  int n,e,d,s,h,dh,h1,h2,dl;
  cin>>n;
  e=n%10;
  //cout<<e<<endl;
  d=n/10%10;
  //cout<<d<<endl;
  s=n/100%10;
  //cout<<s<<endl;
  h=n/1000%10;
  //cout<<h<<endl;
  dh=n/10000;
  //cout<<dh<<endl;
  h1=dh*10+e;
  h2=h*100+s*10+d;
  if(h2%h1==0)
    {
    dl=h2/h1;
    cout<<"yes"<<endl<<dl;
    }
  else cout<<"Sorry";
}
