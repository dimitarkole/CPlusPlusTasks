#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],max,max2,min=n,sum=0,p;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    if(min>m)min=m;
    for(int i=0;i<min;i++)
    {
        max=max2=0;
        for(int j=0;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                p=j;
            }
        }
        a[p]=0;
        for(int j=0;j<m;j++)
        {
            if(max2<b[j])
            {
                max2=b[j];
                p=j;
            }
        }
        b[p]=0;
        sum=sum+(max*max2);
    }
    cout<<min<<" "<<sum;
}
