#include<iostream>
using namespace std;
int main()
{
    char klass[20010],ch;
    long long countHand=0, countSound=0, br=0;
    do
    {
        cin.get(ch);
        if(ch=='\n')break;
        klass[br]=ch;
        br=br+1;
    }while(br<=20000);

    for(int i=0;i<=br;i++)
    {
        cout<<klass[i];
    }

}
