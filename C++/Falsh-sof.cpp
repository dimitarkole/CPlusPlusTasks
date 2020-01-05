#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char c;
    int c2=0,c10=0,brs=0,br=1,b2p;
    do
    {
        cin.get(c);
        if (c!='\n')
        {
            brs++;
            c2=c2*10+(c-'0');
        }
    }while(c!='\n');
    c10=0;
    brs--;
    do
    {
        for(int i=0;i<brs;i++)
        {
            br=br*10;
        }
        b2p=pow(2,brs);
        c10+=((c2/br)%10)*b2p;
        brs--;
        br=1;
    }while(brs>=0);
    if (c10%7==0)cout<<"Yes";
    else
    {
        if((c10+1)%7==0)cout<<"1";
        else if((c10+2)%7==0)cout<<"2";
        else if((c10+3)%7==0)cout<<"3";
        else if((c10+4)%7==0)cout<<"4";
        else if((c10+5)%7==0)cout<<"5";
        else if((c10+6)%7==0)cout<<"6";
    }
}
