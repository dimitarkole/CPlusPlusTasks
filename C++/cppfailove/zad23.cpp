#include<iostream>
using namespace std;
int main()
{
    int n,ed,sum=0,max=0;
    cin>>n;
    do
    {
        ed=n%10;
        n=n/10;
        sum+=ed;
        if(max<ed)max=ed;
    }while (n!=0);
    cout<<sum<<" "<<max;
}
