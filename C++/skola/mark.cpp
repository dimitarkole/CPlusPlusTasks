#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float sum=0;
    int n,n1,max=0,min=100,n2;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>n1;
        sum+=n1;
        if(min>n1)min=n1;
        if(max<n1)max=n1;
    }
    sum=sum-(min+max);
    sum=sum/(n-2);
    //cout<<"sum="<<sum<<endl;
    n2=(int)(sum*10)%10;
    //cout<<n2<<"=n2"<<endl;
    if(n2>=5)cout<<ceil(sum);
    else cout<<floor(sum);
}
