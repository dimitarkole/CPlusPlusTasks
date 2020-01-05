#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long massiverSize=2000005;

    long a,b,max=0,min=massiverSize;
    char massiv[massiverSize];
    for(int i=0;i<massiverSize-2;i++)
    {
        massiv[i]='o';
    }
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        for(long j=a;j<=b;j++)
        {
            massiv[j]='x';
        }
        if(max<b)max=b;
        if(min>a)min=a;
    }
    long answer[n][2];
    int flag=0,br=0;
    for(int i=min-1;i<max+2;i++)
    {
        if((massiv[i]=='x')&&(massiv[i-1]=='o'))answer[br][0]=i;
        if((massiv[i]=='o')&&(massiv[i-1]=='x'))
        {
            answer[br][1]=i-1;
            br=br+1;
        }
    }
    cout<<br<<endl;
    for(int i=0;i<br;i++)
    {
         cout<<answer[i][0]<<" "<<answer[i][1]<<endl;
    }

}
