#include<iostream>
using namespace std;
int main()
{
    int k,n,n2,brch=0,br=0,ed;
    cin>>k>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>n2;
        do
        {
            ed=n2%10;
            n2=n2/10;
            brch++;
        }while (n2!=0);
        if(brch==k)br++;
        brch=0;
    }
    cout<<br;
}
