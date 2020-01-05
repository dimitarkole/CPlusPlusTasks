#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int massive[n][n],br=1;
    for(int i=n-1; i>=0;i--)
    {
        for(int j=0; j<n;j++)
        {

            massive[i][j]=br;
            br=br+1;
        }
        if(i>0){
            i=i-1;
            for(int j=n-1; j>=0;j--)
            {

                massive[i][j]=br;
                br=br+1;
            }
        }

    }
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n;j++)
        {

            cout<<massive[i][j]<<"  ";
        }
        cout<<endl<<endl;
        //if(i<n-1))

    }
}
