#include<iostream>
using namespace std;
int main()
{
    int n,h,l;
    char s;
    cin>>n>>h>>l>>s;
    for(int i=0;i<=l;i++)
    {
        cout<<s;
    }
    for(int i=1;i<n;i++)
    {
        cout<<endl<<s;
        for(int g=1;g<=h-2;g++)
        {
            for(int j=1;j<=l-1+(i-1)*l;j++)
            {
                cout<<" ";
            }
             cout<<s<<endl<<s;
        }
        for(int j=1;j<=l-1+(i-1)*l;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=l;k++)
        {
            cout<<s;
        }
    }

    cout<<endl<<s;
    for(int g=1;g<=h-2;g++)
    {
        for(int j=1;j<=l-1+(n-1)*l;j++)
        {
            cout<<" ";
        }
         cout<<s<<endl<<s;
    }
    for(int j=1;j<=n*l;j++)
    {
        cout<<s;
    }
    cout<<n*l+1;
}
