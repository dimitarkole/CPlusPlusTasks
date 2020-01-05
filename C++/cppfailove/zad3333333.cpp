#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<endl<<endl;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0) cout<<i<<"   ";
    }
}
