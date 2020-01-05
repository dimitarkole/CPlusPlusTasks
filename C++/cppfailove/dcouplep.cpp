#include<iostream>
using namespace std;
int main()
{
    int nac=1,krai,n,d,obr=0,ed,ei,k=1,br=0;
    cin>>n>>d;
    for(int i=1;i<n;i++)
    {
        nac*=10;
    }
    krai=nac*10-1;
    while(nac%d!=0)nac++;
    for(int i=nac;i<=krai;i++)
    {
        if(i%d==0)
        {

            if(i%10!=0)
            {
                ei=i;
                obr=0;
                do
                {
                    ed=ei%10;
                    ei=ei/10;
                    obr=obr*10+ed;


                }while (ei!=0);
                if((obr%d==0)&&(obr!=i))br++;
            }
        }
    }cout<<br/2;
}
