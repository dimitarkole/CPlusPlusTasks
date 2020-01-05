#include <iostream>
using namespace std;
int main()
{ int n;
  cin>>n;
  int a,m;
  cin>>m;
  int s=m;
  for(int i=2;i<=n;i++)
   {cin>>a;
    if(m>a) m=a;
    s=s+a;
   }
  cout<<s-m+1<<endl;
}
