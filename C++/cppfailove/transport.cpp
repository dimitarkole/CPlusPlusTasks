#include<iostream>
using namespace std;
int main()
{
    long long n,m,teglonatovar[1000],br=0,sbor=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>teglonatovar[i];
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
        if(sbor+teglonatovar[i]<=m)
        {
            sbor+=teglonatovar[i];
        }

        else
        {
            br++;
            sbor=teglonatovar[i];
        }

    }
    br++;
    cout<<br;
}
