#include<iostream>
using namespace std;
int main()
{
    int gol1=1,gol2=0,br=0,sum=0,n;
    cin>>n;
    do
    {
        br++;
        sum+=br;
    }while(sum!=n);
    cout<<br;
}
