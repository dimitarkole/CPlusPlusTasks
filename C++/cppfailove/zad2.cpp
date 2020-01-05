#include<iostream>
using namespace std;
int main()
{
    int k, ed, des, st;
    cout<<"Vavedete estestveno chislo"<<endl;
    cin>>k;
    for (int i=100; i<1000; i++)
    {
      ed=i%10;
      des=i/10%10;
      st=i/100;
      if (ed+des+st ==k) cout<<i<<"  ";
    }

}
