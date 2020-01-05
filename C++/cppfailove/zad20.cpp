#include<iostream>
using namespace std;
int main()
{
    int n,n2,n3,flag=0,br1=1,br2=0;
    cin>>n;
    cin>>n2;
    for(int i=1;i<n;i++)
    {
        cin>>n3;
        if(n3==n2)
        {
            flag=1;
            br1++;
        }
        else
        {
            if(br1>br2)br2=br1;
            br1=1;
        }
        n2=n3;
    }
    if(flag==1)cout<<"Yes "<<br2;
    else cout<<"No";
}
