#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int god[n],god2[n],god3[n],ed,masiv[10],org,flag=0,min=10000,mingod,min2,ind=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<10;j++)masiv[j]=0;
        cin>>god[i];
        org=god[i];
        do
        {
            ed=org%10;
            org/=10;
            masiv[ed]+=1;
        }while(org!=0);
        flag=0;
        for(int j=0;j<10;j++)
        {
            if(masiv[j]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)god2[i]=1;
        else god2[i]=0;
    }
   // for (int j=0;j<n; j++)cout<<god2[j]<<"  ";
    flag=0;
    for(int i=0;i<n;i++)
    {

        if(god2[i]==0)
        {
            for(int j=0;j<n;j++)
            {
                if( (god2[j]==1))
                {
                    min2=fabs(god[i]-god[j]);
                    cout<<"j="<<j<<"  min2="<<min2<<endl;
                    if(min>min2)
                    {
                        min=min2;
                        mingod=god[i];
                    }

                }
            }

        }
    }
    cout<<"min="<<min<<endl;
    if(min!=10000)cout<<mingod;
    else cout<<"0";

}
