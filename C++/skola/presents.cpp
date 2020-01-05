#include<iostream>
using namespace std;
int main()
{
    int m,s,k;
    cin>>m>>s>>k;
    s=(m*100+s)*k;
    cout<<s/100<<" "<<s%100;
}
