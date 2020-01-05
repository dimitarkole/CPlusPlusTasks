#include<iostream>
using namespace std;
int main()
{
    int ch,sum=0,askikod;
    char molek1,molek,enter;
    cin>>ch;
    cin.get(enter);
    cin.get(molek1);
    for(int i=1;i<=ch;i++)
    {
        cin.get(molek);
        if((molek>='0')&&(molek<='9'))askikod=molek-'0';
        else askikod=1;
        switch(molek1)
        {
            case 'H':sum+=1*askikod;break;
            case 'C':sum+=12*askikod;break;
            case 'N':sum+=14*askikod;break;
            case 'O':sum+=16*askikod;break;
        }
        molek1=molek;
    }
    cout<<sum;
}
