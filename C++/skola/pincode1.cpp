#include<iostream>
using namespace std;
int main()
{
    int a,b,ed1,ed2,des1,des2,stot1,stot2,ogl1,ogl2;
    cin>>a>>b;
    ed1=a%10;
    des1=a/10%10;
    stot1=a/100;
    ed2=b%10;
    des2=b/10%10;
    stot2=b/100;
    ogl1=ed1*100+des1*10+stot1;
    ogl2=ed2*100+des2*10+stot2;
    if(ogl1>ogl2)cout<<ogl1;
    else cout<<ogl2;
}
