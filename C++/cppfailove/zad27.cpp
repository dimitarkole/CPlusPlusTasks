#include<iostream>
using namespace std;
int main()
{
    int n,rezoltat,parvo=1,vtoro=1;
    cin>>n;
    do
    {
        rezoltat=parvo+vtoro;
        parvo=vtoro;
        vtoro=rezoltat;
    }while(rezoltat<=n);
    cout<<rezoltat;
}
