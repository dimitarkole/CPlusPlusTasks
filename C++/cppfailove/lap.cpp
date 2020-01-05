#include<iostream>
using namespace std;
int NOK(int M, int N)
{
    while (M!=N)
    {
        if (M>N) M-=N;
        else N-=M;
    }
    return M;
}
int main()
{
    int x,y,z,t,k1;
    cin>>x>>y>>z>>t;
    k1=(t*z)/NOK(t,z);
    k1=(k1*y)/NOK(k1,y);
    k1=(k1*x)/NOK(k1,x);
    cout<<k1;
}
