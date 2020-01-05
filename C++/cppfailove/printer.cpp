#include<iostream>
using namespace std;
int main()
{
    int n,m,mb[100],gb[100],sum=0;
    char kb[100],m2;
    cin>>n>>m;
    cin.get();
    for(int i=0;i<=n-1;i++)
    {
        cin.get(kb[i]);
        cin>>mb[i];
        cin>>gb[i];
        cin.get();
    }
    for(int i=0;i<=m;i++)
    {
        cin.get(m2);
        for(int j=0;j<=n-1;j++)
        {
            if(kb[j]==m2)sum+=mb[j];
            else if(kb[j]+('A'-'a')==m2)sum+=gb[j];

        }

    }
    cout<<sum;

}
