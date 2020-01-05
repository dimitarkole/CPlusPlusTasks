#include<iostream>
using namespace std;
int main()
{
    int n2,sum=0,br=0;
    do
    {
        cin>>n2;
        if(n2%2==0)sum+=n2;
        else br++;
    }while (n2!=0);
    cout<<sum<<" "<<br;
}
