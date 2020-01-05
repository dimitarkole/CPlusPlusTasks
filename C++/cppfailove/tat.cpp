#include<iostream>
using namespace std;
int main()
{
  char b11,b12,b13,b14,b21,s1,b22,b23,b24,s2,b31,b32,b33,b34,s3,b41,b42,b43,b44;
  int br=0;
  cin.get(b11);
  cin.get(b12);
  cin.get(b13);
  cin.get(b14);
  cin.get(s1);
  cin.get(b21);
  cin.get(b22);
  cin.get(b23);
  cin.get(b24);
  cin.get(s2);
  cin.get(b31);
  cin.get(b32);
  cin.get(b33);
  cin.get(b34);
  for(int i=0;i<4;i++)
  {
    if((b11=='T'))br++;
    if(b11=='A')br++;
      if((b22=='T')&&(b23=='A')&&(b24=='T'))br++;
    if((b31=='T')&&(b32=='A')&&(b33=='T'))br++;
    if((b32=='T')&&(b33=='A')&&(b34=='T'))br++;

  }

 // if((b41=='T')&&(b42=='A')&&(b43=='T'))br++;
  //if((b42=='T')&&(b43=='A')&&(b44=='T'))br++;
  cout<<br;
}
