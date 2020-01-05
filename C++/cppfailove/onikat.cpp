#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    float a[N],onikat,N2=0;
    for(int i=0;i<=N;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<=N;i++)
    {
        onikat=a[i];
        for(int j=i+1;j<=N;j++)
        {
            if(onikat==a[j])a[j]=a[j]+0.9;

        }
        if(onikat==ceil(a[i]))
        {

            N2++;
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<"N="<<N2;
}
