#include<iostream>
using namespace std;
int main()
{
    int n,a,b,br=0;
    cin>>n>>a>>b;
    do
    {
        if(n%a!=0)
        {
            br++;
            n=n-(n%a);
        }
        else
        {
            n=n-n/a;
            br++;
        }
        if(n!=0)
        {
            if(n%b!=0)
            {
                br++;
                n=n-(n%b);
            }
            else
            {
                n=n-n/b;
                br++;
            }
        }

    }while (n!=0);
    cout<<br;
}
