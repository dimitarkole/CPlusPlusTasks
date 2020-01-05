#include<iostream>
using namespace std;
int main()
{
    unsigned int n,brch=0,sumch=0,sumnch=0,maxc=0,minc=9,k,c4p,parola;
    cin>>n;
    while(n!=0)
    {
        k=n%10;
        n=n/10;
        if(k%2==0)
        {
            brch++;
            sumch+=k;
        }
        else sumnch+=k;
        if(maxc<k)maxc=k;
        if(minc>k)minc=k;

    }
    if(sumch>=10)sumch=sumch/10+sumch%10;
    if(sumnch>=10)sumnch=sumnch/10+sumnch%10;
    c4p=maxc-minc;
    parola=brch*1000+sumch*100+sumnch*10+c4p;
    cout<<parola;
}
