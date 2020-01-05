#include<iostream>
using namespace std;
int main()
{
    char ch;

    int brb=(int)('z'-'a')+1;
    int a[brb];
    for(int i=0;i<=25;i++)
    {
        a[i]=0;
    }

    do
    {
        cin.get(ch);
        a[ch-'a']++;
    }
    while(ch!='\n');
    for(int i=0;i<=25;i++)
    {
        if(a[i]>1)cout<<(char)('a'+i)<<" "<<a[i]<<endl;
    }
}
