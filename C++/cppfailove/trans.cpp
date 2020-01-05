#include<iostream>
using namespace std;
int main()
{
    int k,m,n,pat1,pat2,brpat=0;
    cin>>k>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>pat1>>pat2;
        if(pat1==k)brpat++;
        if(pat2==k)brpat++;
    }
    cout<<brpat;
}
