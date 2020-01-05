#include<iostream>
using namespace std;
int main()
{
    int a,b,oa,ob,ea,da,sa,eb,db,sb;
    cin>>a>>b;
    ea=a%10;
    eb=b%10;
    da=(a/10)%10;
    db=(b/10)%10;
    sa=a/100;
    sb=b/100;
    oa=ea*100+da*10+sa;
    ob=eb*100+db*10+sb;
    if(oa>ob)cout<<oa;
    else cout<<ob;

    return 0;
}
