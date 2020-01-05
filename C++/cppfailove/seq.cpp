#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],br=0,max=0,ch;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    br=1;
    ch=A[0];
    for(int i=1;i<=n;i++)
    {
        if(A[i]==ch)br++;
        else
        {
            if(max<br)max=br;
            br=1;
            ch=A[i];
        }
    }
    if(max<br)max=br;
    cout<<max;
}
