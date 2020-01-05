#include<iostream>
using namespace std;
int main()
{
    int n,k,sumo=0;
    cin>>n>>k;
    cout<<"G";
    sumo=n/k;
    if(n%k==0)sumo--;
        for(int i=1;i<=sumo;i++)
        {
            cout<<"O";
        }
    cout<<"L";
}
