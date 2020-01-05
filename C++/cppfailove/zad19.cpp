#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,nl,kl,rezoltat;
    int max=0,max2,min2;
    cin>>n;
    cin>>nl>>kl;
    //max=nl;
    //if(max<kl)max=kl;
    //rezoltat=max-((nl+kl)-max);
    rezoltat=fabs(nl-kl);
    min2=rezoltat;
    max2=rezoltat;
    for(int i=1;i<n;i++)
    {
        cin>>nl>>kl;
        //max=nl;
        //if(max<kl)max=kl;
        //rezoltat=max-((nl+kl)-max);
        rezoltat=fabs(nl-kl);
        if(min2>rezoltat)min2=rezoltat;
        if(max2<rezoltat)max2=rezoltat;
    }
    cout<<max2<<" "<<min2;
}
