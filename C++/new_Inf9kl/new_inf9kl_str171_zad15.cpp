#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n>>a;
    int A[n][a],chislo,chislo2,flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<a;j++)
    {   flag=1;
        chislo=A[j][0];

        for(int i=1;i<n;i++)
        {
            for(int p=i+1;p<n;p++)
            {
                chislo2=A[p][j];
                //cout<<endl<<"A[i][j]="<<A[i][j]<<endl;
                if(chislo2==chislo)
                {
                    flag=0;
                    //break;
                }
            }
        }
        if(flag==1)cout<<"Yes ";
        else cout<<"No ";

    }
}
