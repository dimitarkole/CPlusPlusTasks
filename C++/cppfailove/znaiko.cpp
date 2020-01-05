#include<iostream>
using namespace std;
int main()
{
    int x,a,b,c,ba,tr,cet;
    cin>>a>>b>>c;
    for(int i=999;i>99;i--)
    {
        if(i%b==0)
        {
            tr=i;
            break;
        }
    }

    for(int j=1000;j<=9999;j++)
    {
        if(j%c==0)
        {
            cet=j;
            break;
        }
    }
    cout<<cet+tr+a<<endl<<a<<
    " "<<tr<<" "<<cet;
}
