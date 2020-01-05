#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,brk=0,brb=0,brch;
    cin>>n;
    brk=n/144;
    n=n%144;
    brb=n/12;
    brch=n%12;
    if(brch*10.50>102.50)
    {
            brch=0;
            brb++;
    }
    if(brb*102.50>1140.00)
    {
        brb=0;
        brk++;
    }

    cout<<brk<<" "<<brb<<" "<<brch<<endl<<brk*144+brb*12+brch;
}
