#include<iostream>
using namespace std;
int main()
{
    int n,rezoltat,parvo=1,vtoro=1;
    cin>>n;
    for(int i=1;i<=n-2;i++)
    {
        rezoltat=parvo+vtoro;
        vtoro=parvo;
        parvo=rezoltat;
    }
    cout<<rezoltat;
}
