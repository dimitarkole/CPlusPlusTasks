#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,m,br=0,sum=0,ch1,ch2;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(i/100%10>0)
        {
            ch1=i%1000;
            ch2=i/1000;
            if(i%(ch1+ch2)==0)
            {
                sum+=i;
                br++;
            }
        }
    }
    cout<<br<<" "<<sum;
}
