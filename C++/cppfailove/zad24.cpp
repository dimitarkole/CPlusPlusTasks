#include<iostream>
using namespace std;
int main()
{
    int n,ed;
    float sredared=0,sum=0,br=0;
    cin>>n;
    do
    {
        ed=n%10;
        n=n/10;
        sum+=ed;
        br++;
    }while (n!=0);
    sredared=sum/br;
    cout<<sredared;
}
