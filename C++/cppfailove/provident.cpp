#include<iostream>
using namespace std;
int main()
{
    int n,k8=0,k6=0,flag=0;
    cin>>n;
    if((n==6)||(n==8))cout<<"1";
    else
    {
        for(int i=n/8;i>=0;i--)
        {
            if((n-i*8)%6==0)
            {
                flag=1;
                k8=i;
                k6=(n-i*8)/6;
                break;
            }
        }
        if(flag==0)cout<<"No solution";
        else
        {
            cout<<k8+k6;
        }
    }

}
