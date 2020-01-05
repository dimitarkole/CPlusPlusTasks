#include<iostream>
using namespace std;
int main()
{
    int nch,kch,br=0,sum=0,cislo=1;
    char ch,ch1,ch2,ch3;
    cin.get(ch);
    cin.get(ch1);
    cin.get(ch2);
    cin.get(ch3);
    nch=(int(ch+ch1))*60+int(ch2+ch3);
    cin.get(ch);
    cin.get(ch1);
    cin.get(ch2);
    cin.get(ch3);
    kch=(int(ch+ch1))*60+int(ch2+ch3);
    cin.get(ch1);
    do
    {

        cin.get(ch2);
        if((ch2>='A')&&(ch2<='Z'))
        {
            //if((ch1>='A')&&(ch1<='Z')) br++;
            cin.get(ch3);
            cislo=cislo*10+ch3;
            if((ch3-'0'>=0)&&(ch3-'0'<=9))
            {
                cin.get(ch3);
                cislo=cislo*10+ch3;
            }

        }
    }
}
