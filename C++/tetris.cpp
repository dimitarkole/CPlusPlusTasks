#include<iostream>
using namespace std;
int main()
{
    int N, M;
    cin>>N>>M;
    char map[N][M+2];
    for(int i=0;i<N;i++)
    {
        cin.get();
        for(int j=0;j<M;j++)
        {
            cin.get(map[i][j]);
        }

    }


    int k=0,sum=0,flagStar=0;
    for(int i=0;i<N;i++)
    {
        flagStar=0;
        for(int j=0;j<M;j++)
        {
            if(map[i][j]=='.')flagStar=1;
        }
        if(flagStar==0)k=k+1;
        else
        {
            k=k+1;
            if(k>1)sum=sum+k*(k+1)/2;
            else if (k==1)sum=sum+1;
            k=0;
        }

    }

    cout<<sum;
}
