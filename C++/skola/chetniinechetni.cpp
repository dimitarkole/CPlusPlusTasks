#include<iostream>
using namespace std;
int main()
{
    char ch;
    int sum=0,br=0;
    for(int i=1;i<=5;i++)
    {
        cin.get(ch);
        if((ch-'0')%2==0)sum+=ch-'0';
        else br++;
    }
    cout<<"br="<<br<<endl;
    cout<<"sum="<<sum;

}
