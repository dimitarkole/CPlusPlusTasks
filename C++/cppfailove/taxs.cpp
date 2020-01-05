#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char b1,b2,b3,b4,b5,b6,b7;
    cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;

    if( ((b1==b7)||(fabs(b1-b7)==fabs('a'-'A')))
       &&
       ((b2==b6)||(fabs(b2-b6)==fabs('a'-'A')))
       &&
       ((b3==b5)||(fabs(b3-b5)==fabs('a'-'A')))
         )
        {
          if((b1>='a')&&(b1<='z')) b1=b1+('A'-'a');
          if((b2>='a')&&(b2<='z')) b2=b2+('A'-'a');
          if((b3>='a')&&(b3<='z')) b3=b3+('A'-'a');
          if((b4>='a')&&(b4<='z')) b4=b4+('A'-'a');
          if((b5>='a')&&(b5<='z')) b5=b5+('A'-'a');
          if((b6>='a')&&(b6<='z')) b6=b6+('A'-'a');
          if((b7>='a')&&(b7<='z')) b7=b7+('A'-'a');
          cout<<b1<<b2<<b3<<b4<<b5<<b6<<b7;
        }
        else
        { //preobr golemite w malki
          if((b1>='A')&&(b1<='Z')) b1=b1+('a'-'A');
          if((b2>='A')&&(b2<='Z')) b2=b2+('a'-'A');
          if((b3>='A')&&(b3<='Z')) b3=b3+('a'-'A');
          if((b4>='A')&&(b4<='Z')) b4=b4+('a'-'A');
          if((b5>='A')&&(b5<='Z')) b5=b5+('a'-'A');
          if((b6>='A')&&(b6<='Z')) b6=b6+('a'-'A');
          if((b7>='A')&&(b7<='Z')) b7=b7+('a'-'A');
          cout<<b1<<b2<<b3<<b4<<b5<<b6<<b7;
        }


}
