#include<iostream>
using namespace std;
int main()
{
    int nc,nm,kc,km;
    cin>>nc>>nm>>kc>>km;
    nm=nc*60+nm;
    km=kc*60+km;
    cout<<(km-nm)/5;
}
