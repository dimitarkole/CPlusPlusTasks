#include<iostream>
using namespace std;
unsigned long long n,sum=0;
void numberToN(int number)
{
    do
    {
        sum+=number%2;
        number=number/2;
    }while(number>0);
}
void numberToN()
{

    for(int i=1; i<=n;i++)
    {
        numberToN(i);
    }
}


int main()
{
    cin>>n;
    numberToN();
    cout<<sum;

}
