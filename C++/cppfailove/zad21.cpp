#include<iostream>
using namespace std;
int main()
{
    int n,ed,br=0;
    cin>>n;
    do
    {
        ed=n%10;
        n=n/10;
        if(ed%2==0)br++;
    }while (n!=0);
    cout<<br;
}
