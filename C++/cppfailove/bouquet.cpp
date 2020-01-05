#include<iostream>
using namespace std;
int main()
{
    int n,m,k,l,p,i,prn,prm,prk,prl;
    cin>>n>>m>>k>>l>>p;
    i=p;
    if((n%i!=1)&&(m%i!=1)&&(k%i!=1)&&(l%i!=1))
    {
        while ((prn!=1)&&(prm!=1)&&(prk!=1)&&(prl!=1))
        {
            i+=p;
            prn=i%n;
            prm=i%m;
            prk=i%k;
            prl=i%l;
        }
    }
    cout<<i;
}
