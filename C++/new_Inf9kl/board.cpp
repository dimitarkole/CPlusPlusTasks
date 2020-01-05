#include<iostream>
using namespace std;
int flag=0,i1,j1,A[4][5];
int kyde_e_br(int br2)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(A[i][j]==br2)
            {
                i1=i;
                j1=j;
                flag=1;
                break;
            }
        }
        if(flag==1)break;
    }
}
int main()
{
    int br=1,i11,i12,j11,j12,flag=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>A[i][j];
        }
    }
    for(int p=0;p!=20;p++)
    {
        kyde_e_br(br);
        flag=0;
        i11=i1;
        j11=j1;
        kyde_e_br(br+1);

        i12=i1;
        j12=j1;
        /*if((i11+2==i12)||(i11-2==i12))
        {
            if((j11+1==j12)||(j11-1==j12))br++;
        }
        else*/ if((j11+2==j12)||(j11-2==j12))
        {
            if((i11+1==i12)||(i11-1==i12))br++;
        }
        else break;

    }
    cout<<br;
}
