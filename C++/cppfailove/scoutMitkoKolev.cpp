#include<iostream>
using namespace std;
int main()
{
    int n,k,brg[100],sum=0,brnb=0,pompr=0,kolg;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>brg[i];
        sum+=brg[i];
    }
    sum=sum/k;
    for(int i=1;i<=n-1;i++)
    {
        if(k>brnb)
        {
            if(brg[i]+pompr>=sum)
            {
                kolg=(brg[i]+pompr)/sum;
                brnb+=kolg;
                pompr=(brg[i]+pompr)%sum;

                cout<<brg[i]-kolg<<" ";

              // if(brg[i+1]+pompr>=sum)brg[i+1]+=pompr;
            }
            else
            {
                //if(brg[i+1]+brg[i]>=sum)brg[i+1]+=brg[i];
                pompr=(brg[i]+pompr)%sum;
                cout<<brg[i]<<" ";
            }
        }
    }
    cout<<brg[n]-(k-brnb);
}
