#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int coordinate[n][2], l,r, lr;
    for(int i=0; i < n; i++)
    {
        cin>>l>>r;
        if(r<l)
        {
            lr= r;
            r=l;
            l=lr;
        }
        coordinate[i][0]=l;
        coordinate[i][1]=r;
    }
    int results[m];
    for(int i=0 ; i<m;i++)
    {
        results[i]=0;
    }
    int ch;
    for(int i=0 ; i<m;i++)
    {
        cin>>ch;
        for(int j=0; j < n; j++)
        {
            if((ch>=coordinate[j][0])&&(ch<=coordinate[j][1]))results[i]++;
        }
    }

    for(int i=0 ; i<m;i++)
    {
        cout<<results[i]<<" ";
    }
}
