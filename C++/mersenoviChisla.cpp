#include<iostream>
#include<cmath>
using namespace std;
//int a=40001;]
int a=40001,strposit,product;
short MesrCh[40001][2],ch[40001][3];
bool flagnumjust=0;
void initMassive(int countMesr)
{
  //  int a=40001;
    for(int i=0;i<a;i++)
    {
        MesrCh[i][0]=0;
        ch[i][0]=0;
        MesrCh[i][1]=0;
        ch[i][1]=0;
        ch[i][2]=0;
    }
    MesrCh[a-1][0]=2;
    MesrCh[a-1][1]=0;
    ch[a-1][0]=2;
    ch[a-1][1]=2;
    ch[a-1][2]=4;
}
int startposition(int str)
{
    for(int i=0;i<=a;i++)
    {
        if(MesrCh[i][0]==0)str++;
        else break;
    }
    return str;
}
void coutMassive(int countMesr)
{
    int start=0;
    start=startposition(start);
    for(int i=start;i<a-1;i++)
    {
        cout<<MesrCh[i][0];
    }
    cout<<MesrCh[a][0]-1;
}
void produchMesr(int n)
{
}
int  numJust(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flagnumjust=1;
            break;
        }
    }
    return flagnumjust;

    int units,hundreds;
    strposit=startposition(0);
    for(int j=a;j>strposit-1;j--)
    {
        product=MesrCh[j][0]*2;
        units=0;
        units=product%10;
        if(product>9)
        {
            units=product%10;
            hundreds=1;
            MesrCh[j-1][1]=hundreds;
        }
        MesrCh[j][0]=units+MesrCh[j][1];
    }
    if(MesrCh[strposit-1][1]==1)MesrCh[strposit-1][0]=1;

    for(int i=0;i<a;i++)
    {
        MesrCh[i][1]=0;
    }
}
int main()
{
   // short d[40000000],ch[40000000],ch1[40000000];
    int countMesr,countFoundMasr=2,number=2,flagMersjust=0;
    bool flagnumjust=0,flagch1morethan,flagch2morethan;
    cin>>countMesr;
    initMassive(countMesr);
    while(countFoundMasr!=countMesr)
    {
        number++;
        flagnumjust=numJust(number);
        produchMesr(countMesr);
        if(flagnumjust==0)
        {
            flagMersjust=0;
            flagch1morethan=0;
            flagch2morethan=0;
            /*do
            {

            }while( flagch1morethan!=0);*/
            countFoundMasr++;
        }

    }
    coutMassive(countMesr);
}
