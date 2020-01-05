#include<iostream>
using namespace std;
int main()
{
    cout<<"a)"<<endl;
        int a,b;
        float c,d;
        cout<<"&a= "<<&a<<endl;
        cout<<"&b= "<<&b<<endl;
        cout<<"&c= "<<&c<<endl;
        cout<<"&d= "<<&d<<endl<<endl;
    cout<<"b)"<<endl;
        int var=158;
        int *po=&var;
        cout<<var<<endl;
        cout<<*po<<endl;
        cout<<po<<endl;
        cout<<&var<<endl<<endl;
    cout<<"c)"<<endl;
        int *q=(int *)0x22ff1c;

}
