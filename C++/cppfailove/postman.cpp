#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[2][n-1],max,max2,min,sum=0,sum2=0;
    for(int i=0;i<n-1;i++)cin>>a[1][i];
    for(int i=0;i<n-1;i++)a[2][i]=0;
    a[k-2][2]=1;
    for(int i=0;i<n-1;i++)
    {
        sum=0;
        for(int j=i;j>=0;j--)
        {
            if(a[j][2]==0)
            {
                sum+=a[j][1];
                a[j][2]=1;
                break;
            }
            else sum+=a[j][1];
        }
        cout<<"sum111="<<sum<<endl;
        max=sum;
        sum=0;
        for(int j=i;j<n-1;j++)
        {
            if(a[j][2]==0)
            {
                sum+=a[j][1];
                a[j][2]=1;
                break;
            }
            else sum+=a[j][1];
        }
        cout<<"sum222="<<sum<<endl;
        max2=sum;
        min=max2;
        cout<<"Max2="<<max2<<"    max="<<max<<endl;
        if(min>max)min=max;
        sum2+=min;

    }
    cout<<sum2;
}
