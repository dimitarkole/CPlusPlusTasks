#include<iostream>
using namespace std;
short s,n;
short price[5000];
void cinPrice()
{
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
}
void orderPrice()
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(price[i]<price[j])
            {
                short ch=price[i];
                price[i]=price[j];
                price[j]=ch;
            }
        }
    }
}
int main()
{
    cin>>s>>n;
    cinPrice();
    orderPrice();

    for(int i=0;i<n;i++)
    {
        cout<<price[i]<<" ";
    }
}
