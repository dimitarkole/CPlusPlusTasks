#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int sum=0,ch=i,stepen=1,letter;
        while(ch>10)
        {
            stepen++;
            ch=ch/10;
        }
        ch=i;

    while(ch>0)
    {
        letter=ch%10;
       sum+=round(pow(letter,stepen));
            ch=ch/10;
        }
        if(sum==i)cout<<i<<endl;

    }
}
