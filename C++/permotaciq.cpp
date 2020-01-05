#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int m[b-a];
    for(int i=1;i<=b-a;i=0)
    {
        m[i]=a;
        a++;
    }
    for(int i=1;i<=b-a;i++)
    {
        cout<<m[i];
    }

}
