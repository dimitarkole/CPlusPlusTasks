#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int m[a][a],br=1,br2=0,st=1,p=a-1,b=0,b2=0;
    for(int i=1;i<=a*a-1;i++)
    {
        //if(br2==0)
        //{
           // for(int j=s;j>=0;j--)
            //{
                for(int k=0;k<st;k++)
                {
                    m[p][b]=br;
                    cout<<"br=  "<<br<<"  p=  "<<p<<"  b=  "<<b<<endl;
                    br++;
                    p--;
                    b--;
                }
                p=a-1;
                st++;
                b2++;
                b=b2;
                cout<<endl;
           // }

      // }
    }


    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }

}
