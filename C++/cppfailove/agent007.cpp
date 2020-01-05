#include<iostream>
using namespace std;
int main()
{
    int l,n,a,max1i,max=0,br=0,ot=0;
    cin>>l>>n>>a;
    max=a;
    max1i=1;
    for(int i=2;i<=n;i++)
    {
        cin>>a;
        if(a>max)
        {
            if(br>=l)
            {
                cout<<max1i<<endl;
                ot++;
            }
            max1i=i;
            max=a;
            br=0;
        }
        else br++;
    }
    if(br>=l)
    {
        cout<<max1i<<endl;
        ot++;
    }
    if(ot==0)cout<<"NO";
}
