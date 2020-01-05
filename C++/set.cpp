#include<iostream>
using namespace std;
int mian()
{
    int n;
    cin>>n;
    //long massive[n][2];
    long a,b,max=0;
    char massiv[1000000010];
    for(int i=0;i<1000000010;i++)
    {
        massiv[i]='o';
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        for(int j=a;j<=b;j++)
        {
            massiv[j]='X';
        }
        if(max<b)max=b;
    }
    long p[n][2];
    int flag=0,br=0;
    for(int i=1;i<n;i++)
    {
        if((massiv[i]='X')&&(massiv[i-1]=='0'))p[br][0]=i;
        if((massiv[i]='X')&&(massiv[i+1]=='0'))
        {
            p[br][1]=i;
            br=br+1;
        }
    }
    cout<<br<<endl;

    for(int i=0;i<br;i++)
    {
         cout<<p[br][0]<<" "<<p[br][1]<<endl;
    }

}
