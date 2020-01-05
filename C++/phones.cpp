#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    float massiveM[m],massiveN[n];
    for(int i=0;i<m;i++)cin>>massiveM[i];
    for(int i=0;i<n;i++)cin>>massiveN[i];

    float ch;
    for(int i=0;i<n;i++)
    {
        ch=massiveN[i];
        for(int j=0;j<m;j++)
        {
            if(ch==massiveM[j])
            {
                massiveM[j]=0;
                break;
            }
        }
    }


    for(int j=0;j<m;j++)
    {
        if(massiveM[j]!=0)cout<<massiveM[j]<<" ";
    }

}
