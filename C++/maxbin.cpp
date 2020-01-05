#include<iostream>
using namespace std;
int main()
{
    char ch[101];
    int br=0,br2=0,i=-1;
    do
    {
        i++;
        cin.get(ch[i]);
    }while(ch[i]!='\n');
    for(int j=0;j<i;j++)
    {
        if(ch[j]=='0')br++;
        else br2++;
    }
    for(i=0;i<br2;i++)
    {
        cout<<"1";
    }
    for(i=0;i<br;i++)
    {
        cout<<"0";
    }
}
