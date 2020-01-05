#include<iostream>
#include<string>
using namespace std;
int main ()
{
 string a;
 int br=0;
 getline(cin,a,'.');
 for(int i=0;ia.length();i++)
 {
  if(a[i]==' ')br++;
 }
 cout<<br++<<endl;
}
