#include<iostream>
using namespace std;
int main()
{
    char znak;
    int lqv=1,des=3,cen=2,raz;
    do
    {
        cin.get(znak);
        if(znak=='A')
        {
            raz=lqv;
            lqv=cen;
            cen=raz;
        }
        else if(znak=='B')
        {
            raz=des;
            des=cen;
            cen=raz;
        }
        else if(znak=='C')
        {
            raz=lqv;
            lqv=des;
            des=raz;
        }

    }while(znak!='.');
    cout<<lqv;
}
