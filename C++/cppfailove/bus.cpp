#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==0)cout<<"Impossible";
    else
    {
        if(n<=m)cout<<n+(m-n)<<" "<<m-1+n;
        else
        {
            cout<<n<<" "<<m-1+n;
        }
    }
}
