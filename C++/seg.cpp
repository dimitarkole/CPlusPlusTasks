#include<iostream>
using namespace std;
int main()
{
    int n,a,b,mina=10005,maxb=0;
    cin>>n;
    char massive[10005];
    for(int i=0;i<10004;i++)
    {
        massive[i]='o';
    }
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        for(int j=a;j<=b;j++)
        {
            massive[j]='x';
        }
        if(mina>a)mina=a;
        if(maxb<b)maxb=b;
    }
    int countOtsechki=0,theBigestOtsechka=0;
    int start=0, finish=0;
    for(int j=mina;j<=maxb;j++)
    {
        if((massive[j]=='x')&&(massive[j-1]=='o'))start=j;
        else if((massive[j]=='x')&&(massive[j+1]=='o'))
        {
            finish=j;
            if(finish-start>theBigestOtsechka)theBigestOtsechka=finish-start;
            countOtsechki=countOtsechki+1;
        }
    }
    cout<<countOtsechki<<" "<<theBigestOtsechka;
}
