#include<iostream>
using namespace std;
int main()
{
    int a,b,p1,p2,ed,ch,br=0;
    cin>>a>>b>>p1>>p2;
    for(int i=a;i<=b;i++)
    {
        ch=i;
        do
        {
            ed=ch%10;
            if((ed%p1!=0)&&(ed%p2!=0))br++;
            ch=ch/10;
        }while(ch!=0);
    }
    cout<<br;
}
