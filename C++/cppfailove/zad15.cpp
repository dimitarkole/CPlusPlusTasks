#include<iostream>
using namespace std;
int main()
{
    int n,br=0;
    char ch;
    cin>>n;
    cin.get();
    for(int i=1;i<=n;i++)
    {
        cin.get(ch);
        if((ch>='a')&&(ch<='z'))br++;
        cin.get();
    }
    cout<<br;
}
