#include<iostream>
using namespace std;
int main()
{
    int n,skok,skok2,min;
    cin>>n;
    skok2=100;
    min=100;
    for(int i=1;i<=n;i++)
    {
        cin>>skok;
        skok2+=skok;
        if(min>skok2)min=skok2;
    }
    cout<<min;
}
