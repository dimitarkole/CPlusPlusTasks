#include<iostream>
using namespace std;
int main()
{
  int table;
  float height, width;
  cin>>table>>height>>width;
  float meter=table*(height+2*0.30)*(width+2*0.30);
  meter=meter*100;
  meter=int(meter);
  meter=meter/100;
  cout<<meter;

}
