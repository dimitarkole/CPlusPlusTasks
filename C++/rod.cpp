#include<iostream>
using namespace std;
int main()
{
    for(int p=0;p<=10;p++)
    {
         int a;
        cin>>a;
        unsigned long long m[a],sum=0;
        for(int i=0;i<a;i++) cin>>m[i];
        int n,k;
        n=0;
        k=a;
        do
        {
            for(int i=n;i<k;i++) sum=sum+m[i];
            if (m[n]>m[k-1])
            {
                n++;
            }
            else k--;

        }while(k-n>1);
        cout<<sum;
    }
}
