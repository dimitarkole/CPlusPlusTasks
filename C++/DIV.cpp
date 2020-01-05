#include<iostream>
using namespace std;
int main()
{
    unsigned long long a,b,c,br=0;
    cin>>a>>b>>c;
    do
    {
        if(a%c==0)
        {
            br++;
            break;
        }
        a++;
    }while(br==0);
    br=0;
    for(unsigned long long i=a;i<b+1;i=i+c) br++;
    cout<<br;
}
