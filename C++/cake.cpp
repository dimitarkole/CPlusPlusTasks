#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height,width;
    cin>>height>>width;
    long scqire=height*width;
    //cout<<"scqire= "<<scqire<<endl;
    char ch;
    long letter;
    do{
        cin>>ch;
        letter=ch-'0';

        if ((letter>=0)&&(letter<=9))
        {
            long number=ch-'0';
            cin.get(ch);
            letter=ch-'0';
            while(ch!='\n')
            {
                letter=ch-'0';
                number=number*10+ letter;
                //cout<<" number= "<<number<<endl;
                cin.get(ch);
            }
            scqire=scqire-number;
            //cout<<" number= "<<number<<endl<<" scqire= "<<scqire<<endl;
        }
        else break;

    }while(scqire>-1);
    if(scqire>-1)cout<<scqire<<" pieces are left.";
    else cout<<"No more cake left! You need "<<scqire*(-1)<<" pieces more.";
}
