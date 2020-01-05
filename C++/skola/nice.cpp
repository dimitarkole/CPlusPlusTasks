#include<iostream>
using namespace std;
int main()
{
    int a,ed,des,sto,hilqdni,deshilqdni,sbor,edsbor,dessbor,flag=1;
    cin>>a;
    ed=a%10;
    des=a/10%10;
    sto=a/100%10;
    hilqdni=a/1000%10;
    deshilqdni=a/10000%10;

    sbor=ed+des+sto+hilqdni;
    if(deshilqdni<sbor)flag=0;

    sbor=ed+des+sto;
    if(hilqdni<sbor)flag=0;

    sbor=ed+des;
    if(sto<sbor)flag=0;

    if(des<ed)flag=0;

    if(flag==0)cout<<"NO";
    else cout<<"YES";
}
