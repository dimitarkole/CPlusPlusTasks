#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"*"<<endl;
    cout<<"* *"<<endl;
    for(int i=0;i<n-3;i++)
    {
        cout<<"* ";
        for(int j=0;j<i+1;j++)cout<<". ";
        cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++)cout<<"* ";
}
