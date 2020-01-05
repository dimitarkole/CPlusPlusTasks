#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n],min;
    for(int i=0;i<n;i++)cin>>m[i];
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(m[j]<m[i])min=j;
        }
        swap(m[i],m[min]);
    }
    for(int i=0;i<n;i++)cout<<m[i]<<" ";
}
