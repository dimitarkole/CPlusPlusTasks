#include<iostream>
using namespace std;
int main()
{
    int n,br=0;
    cin>>n;
    int a[n];
    char zn,zn1,zn2;
    cin.get();
    for(int i=0;i<n;i++)
    {
        br=0;
        cin.get(zn);
        zn1=zn;
        cin.get(zn);
        zn2=zn;
        if(zn2!='\n')
        {
            do
            {

                if(zn2=='-')br++;
                if(zn2=='B')
                {
                    if((zn1=='-')&& (zn2=='-'))br=br-2;
                    else if ((zn1=='-')||(zn2=='-'))br=br-1;
                }
                if(zn2=='S')
                {
                    cin.get();
                }
                cin.get(zn);
                zn1=zn2;
                zn2=zn;
                if(br<0)br=0;
                cout<<endl<<"element="<<zn1<<"    br="<<br<<endl;
            }while(zn2!='\n');
        }
        a[i]=br;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
