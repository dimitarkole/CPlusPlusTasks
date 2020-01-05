#include<iostream>
using namespace std;
int main()
{
    int n,ed,n1,sum=0,flag=0;
    cin>>n;
    for(int i=1;i<6;i++)
    {
        n1=n;
        for(int j=1;j<6-i;i++)
        {
            ed=n1%10;
            n1=n1/10;
            sum+=ed;
        }
        ed=n1%10;
        if(ed<sum)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)cout<<"YES";
    else cout<<"NO";
}
