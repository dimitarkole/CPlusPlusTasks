#include<iostream>
using namespace std;
int main()
{
    int k,n,x,r=0,kap=0,l=0,k2,br=0,bru=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        k2=k;
        do
        {
            l++;
            k2/=10;
        }while (k2!=0);
        k2=k*k;
        do
        {
            kap+=(k2%10)*10;
            k2/=10;
            br++;
        }while (br!=l);
        r=k2;
        x=r+kap;
        if(x==k)bru++;
        br=0;
        l=0;

    }
    cout<<bru;
}
