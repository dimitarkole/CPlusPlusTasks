#include<iostream>
using namespace std;
int main()
{
  char n;
  int max;
  cin.get(n);
  max=n;
  do
  {
     cin.gee(n);
     if((n!='!')&&(max<int(n)))max=n;
  }while (n!='!');
  cout<<max<<"  "<<(char)max;
}
