#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a=1;
  int b=n;
  int a1=a;
  int b1=b;
   
  for(int d=2;d<=n;d++)
   {
     if(n%d==0){a=d;b=n/d;}
     if(a>b)break;
     a1=a;b1=b;
   }
  
  cout << a1 << " " << b1 << endl; 
       
}
