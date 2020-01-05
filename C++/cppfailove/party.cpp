#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int hb,mb,he,me,minn,mink,minp;
  float pesni;
  cin>>hb>>mb>>he>>me;
  minn=hb*60+mb;
  mink=he*60+me;
  minp=mink-minn;
  pesni=minp/5;
  cout<<floor(pesni);
}
