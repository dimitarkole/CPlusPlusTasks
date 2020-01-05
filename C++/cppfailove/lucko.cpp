#include<iostream>
using namespace std;
int main()
{
    int n,e,d,s,h,dh,sh,ch1,ch2;
    cin>>n;
    e=n%10;
    d=n/10%10;
    s=n/100%10;
    h=n/1000%10;
    dh=n/10000%10;
    sh=n/100000%10;
    ch1=sh+dh+h;
    ch2=s+d+e;
    if((ch1==ch2)&&(sh>s))cout<<ch1;
    else if((ch1!=ch2)&&((s>sh)||(sh==s)))cout<<"30";
         else if((ch1!=ch2)&&(s>sh))cout<<"31";
              else if((ch1==ch2)&&((sh>s)||(sh==s)))cout<<"32";
}
