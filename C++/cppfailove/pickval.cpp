#include <iostream>
using namespace std;

int main()
{
    int parvo, vtoro;
    int a, b, c, brp=0,brv=0;
    cin>>parvo>>vtoro;
    a=parvo;b=vtoro;
    cin>>c;
    do
    {   if(a<b&&c<b) brp++;
        if(a>b&&c>b) brv++;
        a=b;b=c;cin>>c;
    } while (c!=0);
    c=parvo;
    if(a<b&&c<b) brp++;
    if(a>b&&c>b) brv++;
    a=b;b=c;c=vtoro;
    if(a<b&&c<b) brp++;
    if(a>b&&c>b) brv++;
    cout << brp<<" "<<brv<<endl;

}
