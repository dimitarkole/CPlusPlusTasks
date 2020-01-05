#include<iostream>
using namespace std;
int main()
{
    int  e,d,s;
    cin>>e>>d>>s;
    if((e==d)&&(e==s))cout<<e<<d<<s;
    else if (d==s) cout<<e<<d<<s<<e;
    else if(e==s)cout<<e<<d<<s;
    else cout<<e<<d<<s<<d<<e;
}
