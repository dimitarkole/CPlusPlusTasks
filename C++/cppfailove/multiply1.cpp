#include<iostream>
using namespace std;
int main()
{
    int n,M=1,sum,ch[9],nsch,ed,kp;
    cin>>n;
    cin>>M;
    cout<<n<< "   "<<M<<endl;
    for(int ii=0;ii<=9;ii++)
    {
        ch[ii]=0;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<"i="<<i<<endl;
        for(int j=1;j<=M;j++)
        {
            cout<<"j="<<j<<endl;

            sum=i*j;
            cout<<"sum="<<sum<<endl;
            do
            {

                ed=sum%10;
                sum=sum/10;
                ch[ed]++;
                cout<<"ed ="<<ed<<endl;
            }while(sum!=0);
        }
    }
    nsch=0;
    kp=ch[0];
    for(int i=1;i<=9;i++)
    {
        cout<<ch[i]<<endl;
        if(kp<ch[i])
        {
            nsch=i;
            kp=ch[i];
        }
    }
    cout<<nsch<<" "<<kp;
}
