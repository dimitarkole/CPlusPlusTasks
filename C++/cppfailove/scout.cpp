#include<iostream>
using namespace std;
int main()
{
    int k,n,nmasiv[101],masiv2[101],sum=0,vzima,brvzeti=0,brmasiv=0;
    for(int i=0;i<101;i++)nmasiv[i]=-1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>nmasiv[i];
        sum+=nmasiv[i];
    }
    vzima=sum/k;
    for(int i=0;i<n;i++)
    {
        masiv2[i]=nmasiv[i];
    }
    do
    {
        if(nmasiv[brmasiv]<vzima)
        {
            cout<<masiv2[brmasiv];
            if(nmasiv[brmasiv+1]!=-1)
            {
                cout<<" ";
                nmasiv[brmasiv+1]+=nmasiv[brmasiv];
            }
        }
        else
        {
            while ((brvzeti<k)&&(nmasiv[brmasiv]>=vzima))
            {
                brvzeti++;
                nmasiv[brmasiv]-=vzima;
                masiv2[brmasiv]--;
            }
            cout<<masiv2[brmasiv];
            if(nmasiv[brmasiv+1]!=-1)cout<<" ";
            nmasiv[brmasiv+1]+=nmasiv[brmasiv];
       }
        brmasiv+=1;
    }while (brvzeti<k);
    for(int i=brmasiv;i<n;i++)
    {
        if(i!=brmasiv)cout<<" ";
        cout<<masiv2[i];
    }
}
