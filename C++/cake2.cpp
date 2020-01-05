#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height,width;
    cin>>height>>width;
    int scqire=height*width;
    char ch;
    do{
        cin>>ch;
        if (ch=!'S')
        {
            int number;
            cin>>number;
            int number2=number, sizeNumeber=10;
            do{
                number2=number2/10;
                sizeNumeber=sizeNumeber*10;
            }while (number2>0);
            number=ch*sizeNumeber+number;

            scqire=scqire-number;
        }
        else break;

    }while(scqire<0);
    if(scqire>-1) cout<<scqire<<" pieces are left.";
    else cout<<"No more cake left! You need "<<scqire*(-1)<<" pieces are left.";
}
