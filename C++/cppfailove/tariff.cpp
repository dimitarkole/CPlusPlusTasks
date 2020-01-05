#include<iostream>
using namespace std;
int main()
{
    int n,f,m,s;
    cin>>n>>f;
    f=f*60;
    for(int i=0;i<n;i++)
    {
        cin>>m>>s;
        if(((m+1)*60<f)||(m*60+s<f))
        {
            if(s==0)s=m*60;
            else s=(m+1)*60;
        }
        else s=m*60+s;
        f-=s;
    }
    if(f>=0)cout<<"0";
    else cout<<f*-1;
}
