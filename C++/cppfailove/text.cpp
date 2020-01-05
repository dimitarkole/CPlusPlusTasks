#include<iostream>
using namespace std;
int main()
{
    char ch;
    int brB=0,brC=0,brZ=0,max;
    for(int i=1;i<=6;i++)
    {
        cin.get(ch);
        if((ch>='a')&&(ch<='z'))brB++;
        else if((ch>='A')&&(ch<='Z'))brB++;
        else if((ch>='0')&&(ch<='9'))brC++;
        else brZ++;
        //cout<<"i="<<i<<endl;
    }
   max=brB;
   if(max<brC)max=brC;
   if(max<brZ)max=brZ;

   if(max==brB)cout<<"B";
   else if(max==brC)cout<<"C";
   else cout<<"Z";
}
