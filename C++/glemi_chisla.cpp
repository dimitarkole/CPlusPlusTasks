#include<iostream>
using namespace std;
int main()
{
    char a;
    int A[100],i=0,B[100],AB[101],ab,ed,des,maxi,maxi2;
    for(int j=0;j<100;j++)
    {
        A[j]=B[j]=AB[j]=-1;
    }
    AB[101]=-1;
    do
    {
        cin.get(a);
        A[100-i]=a-'0';
        i++;
    }while(a!='\n');
    maxi=i;
    i=0;
    do
    {
        cin.get(a);
        B[100-i]=a-'0';
        i++;
    }while(a!='\n');
    if(maxi<i)maxi=i;
    maxi2=maxi;
    i=0;
    do
    {
        if((B[100-i]==-1)&&(A[100-i]!=-1))AB[100-i]=A[100-i];
        if((A[100-i]==-1)&&(B[100-i]!=-1))AB[100-i]=A[100-i];
        if((B[100-i]+A[100-i]<10)&&((A[100-i]!=-1)&&(B[100-i]!=-1)))AB[100-i]=B[100-i]+A[100-i];
        else if ((A[100-i]!=-1)&&(B[100-i]!=-1))
        {
            ab=B[100-i]+A[100-i];
            ed=ab%10;
            des=ab/10;
            AB[100-i]=ed;
            B[100-i-1]+=des;
        }
    }while((A[100-i]!=-1)&&(B[100-i]!=-1));
    for(int j=0;j<102;j++)
    {
        if(AB[j]!=-1)cout<<AB[j];
    }

}
