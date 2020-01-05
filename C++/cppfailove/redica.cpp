#include<iostream>
using namespace std;
int main()
{
    int n,k[100],brot=0,flag=1,prch;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>k[i];
        if(k[i]<0)brot++;
    }
    for(int j=0;j<=n-1;j++)
    {
        for(int i=2;i<=k[j]/2;i++)
        {
            if(k[j]%i!=0)flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {

            prch=j;
            break;
        }
    }
    cout<<brot<<endl;
    if(flag==0)cout<<prch<<endl;
    else cout<<"nama prosto cislo v redicata"<<endl;
    if(prch==brot)
    {
        for(int i=0;i<n;i++)
        {

                 if(k[i]%2==1) cout<<k[i]<<" ";
        }

    }
}
