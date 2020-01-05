#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    unsigned long long n,m,k;
    float rezultat;
    cin>>n>>m>>k;
    n=k/n;
    rezultat=(float)m/n;
    cout<<ceil(rezultat);
}
