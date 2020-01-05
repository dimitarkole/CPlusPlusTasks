#include<iostream>
using namespace std;
int main()
{
    int n,m,flag=0,nomber=0;
    char bukva;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin.get();
        cin.get(bukva);
        if((bukva>='a')&&(bukva<'z'))
        {
            if((bukva-'a')+1==n)
            {
                flag=1;
                if(nomber==0)nomber=i;
            }
        }
        if((bukva>='A')&&(bukva<'Z'))
        {
            if((bukva-'A')+1==n)
            {
                flag=1;
                if(nomber==0)nomber=i;
            }
        }
        do
        {
            cin.get(bukva);
        }while(bukva!='.');

    }
    if(flag==1)cout<<"win "<<nomber;
    else cout<<"lose";
}
