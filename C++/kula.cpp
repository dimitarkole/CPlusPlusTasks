#include<iostream>
using namespace std;
int br=0;
void kula(int n,char ot,char prez,char bo)
{
    if(n>0)
    {
        kula(n-1,ot,bo,prez);
        br++;
        cout<<"br= "<<br<<" Premesti disk ot"<<ot<<" na "<<bo<<endl;
        kula(n-1,prez,ot,bo);

    }

}
int main()
{

    kula(10,'À','Á','Â');
    cout<<"br="<<br;

}
