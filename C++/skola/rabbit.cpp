#include<iostream>
using namespace std;
int main()
{
    int a;
    for(int i=1;i<=3;i++)
    {
        cin>>a;
        if(a==1)cout<<"("<<(char)92<<"_"<<"/"<<")"<<endl;
        else if(a==2)cout<<"("<<"o"<<"."<<"o"<<")"<<endl;
        else if(a==3)cout<<"("<<"_"<<"."<<"_"<<")"<<endl;
    }
}
