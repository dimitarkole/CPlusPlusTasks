#include<iostream>
using namespace std;
int main()
{
    int n,x,x2,slonceta,sum=0,ed=0;
    char k;
    cin>>n;
    cin.get();
    //cin.get(k);
    //cout<<k<<" ";
    do
    {
        cin.get(k);
        if (k!='\n')
        {
            ed=k-'0';
            sum+=ed;
            //cout<<k<<" ";

        }

    }while(k!='\n');
    //cout<<"kraj";
    if(sum<n)cout<<n-sum;
    else
    {
        x=sum/n;
        x2=sum%n;
        for(int i=1;i<=x2;i++)cout<<x+1;
        for(int i=x2+1;i<=n;i++)cout<<x;
    }
}
