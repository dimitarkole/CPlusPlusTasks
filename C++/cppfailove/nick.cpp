#include<iostream>
using namespace std;
int main()
{
    char zn;
    int br=1;
    do
    {
        cin.get(zn);
        if(br%2==1)
        {
            if((zn>='a')&&(zn<='z'))
            {
                zn+='A'-'a';
               // cout<<zn;
            }
        }
        else
        {
            if((zn>='A')&&(zn<='Z')) zn-=('A'-'a');
        }
        cout<<zn;
        br++;
    }
    while (zn!='.');
}
