#include<iostream>
using namespace std;
int main()
{
    int a,br=0,flag=1;
    cin>>a;
    char A[a],bukva;
    cin.get();
    cin.get(bukva);
    cin.get();
    for(int i=0;i<a;i++)
    {
        cin.get(A[i]);
    }
    if(A[0]!=bukva)
    {
        flag=0;
        br++;
    }
    for(int i=1;i<a;i++)
    {
        if(A[0]==bukva)flag=1;
        if((flag!=1)&&(A[0]!=bukva))
        {
            br++;
            flag=0;
        }
    }
    cout<<br;
}
