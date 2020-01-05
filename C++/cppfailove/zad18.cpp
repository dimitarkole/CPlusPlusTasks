#include<iostream>
using namespace std;
int main()
{
    int n,max=0,flag=0;
    do
    {
        cin>>n;
        if(n%2==1)
        {
            if(max<n)max=n;
            flag=1;
        }
    }while (n!=0);
    if(flag==1)cout<<max;
    else cout<<"Neste vaveli necetno cislo";
}
