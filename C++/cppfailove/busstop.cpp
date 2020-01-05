#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,vch1,vch2,sum=0,br=0,maxbr=0,maxsum=0,ngd=1;
    cin>>n>>vch1;
    br=1;
    sum=vch1;
    for(int i=1;i<n-1;i++)
    {
        cin>>vch2;
        if(vch2>vch1)
        {
            br++;
            sum+=vch2;
        }
        else
        {
            if(maxbr<br)
            {
                maxbr=br;
                maxsum=sum;
            }
            br=1;
            sum=vch2;
        }
        vch1=vch2;
    }
    if(maxbr<br)
    {
        maxbr=br;
        maxsum=sum;
    }
    for(unsigned long long i=maxsum/2;i>=2;i--)
    {
        if(maxsum%i==0)
        {
            ngd=i;
            break;
        }
    }
    cout<<maxbr<<endl<<ngd;
}
