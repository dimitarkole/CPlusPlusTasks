#include<iostream>
using namespace std;
int main()
{
    char ch;
    int sm=0,sl=0,ss=0,sum=0,br=0,ich;
    do
    {
        sum=0;
        ch=cin.get();
        if(ch=='\n')
        {
            break;

        }
        else
        {
            cin>>ch;
            cin>>ch;
            for(int i=0;i<=3;i++)
            {
                cin>>ch;
                ich=ch-'0';
                cout<<ich<<endl;
                /*switch (ch)
                {
                    case '1': ich=1; break;
                    case '2': ich+=2; break;
                    case '3': ich+=3; break;
                    case '4': ich+=4; break;
                    case '5': ich+=5; break;
                    case '6': ich+=6; break;
                    case '7': ich+=7; break;
                    case '8': ich+=8; break;
                    case '9': ich+=9; break;
                }*/
                switch (i)
                {
                    case 0:sum=ich; break;
                    case 1:sum=sum*10+ich; break;
                    case 2:sum=sum*100+ich; break;
                    case 3:sum=sum*1000+ich; break;
                }
            }

            if (sum %2==0) sm+=1;
            else if (sum %3==0) sl+=1;
            else ss+=1;
            br++;
            cin>>ch;
        }
    }while(ch!='\n');
    cout<<sm<<" "<<sl<<" "<<ss;
}
