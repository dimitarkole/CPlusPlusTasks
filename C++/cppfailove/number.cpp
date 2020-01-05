#include<iostream>
using namespace std;
int main()
{
    int n,m,br=0,sum=0,ch1,ch2;
    cin>>n>>m;
    for(int i=n;i<=n;i++)
    {
        if(i/100!=0)
        {
            ch1=i%1000;
            ch2=i/1000;
            if((ch1+ch2)%i==0)
            {
                sum+=i;
                br++;
            }
        }
    }
}
